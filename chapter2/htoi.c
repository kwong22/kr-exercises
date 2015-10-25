/**
 * htoi.c
 *
 * Kelvin Wong
 * kwong691@gmail.com
 *
 * Converts a string of hexadecimal digits into its equivalent integer value
 */

#include <stdio.h>

int htoi(char* s);

int main(int argc, char* argv[])
{
  // Need a string
  if (argc < 2)
  {
    printf("Please include a string of hexadecimal digits.\n");
    return 1;
  }
  else
  {
    int result = htoi(argv[1]);

    if (result == -1)
    {
      printf("Invalid string of hexadecimal digits\n");
    }
    else
    {
      printf("%d\n", result);
    }
  }
}

// Converts s from hexadecimal [0-9 A-Z a-z] to an integer
// Letter case does not matter
// Returns -1 if string does not contain hexadecimal digits
int htoi(char* s)
{
  int n = 0;

  // Loop through characters in s and convert to integer
  for (int i = 0; s[i] != '\0'; i++)
  {
    if (s[i] >= '0' && s[i] <= '9')
    {
      n = 16 * n + s[i] - '0';
    }
    else if (s[i] >= 'a' && s[i] <= 'f')
    {
      n = 16 * n + s[i] - 'a' + 10;
    }
    else if (s[i] >= 'A' && s[i] <= 'F')
    {
      n = 16 * n + s[i] - 'A' + 10;
    }
    else
    {
      // Invalid hexadecimal digit
      return -1;
    }
  }

  return n;
}

/**
 * any.c
 *
 * Kelvin Wong
 * kwong691@gmail.com
 *
 * Returns the first index where an occurrence of any character of string s2 is
 * found in string s1.
 */

#include <stdio.h>

int any(char* s1, char* s2);

int main(int argc, char* argv[])
{
  if (argc != 3)
  {
    printf("Please include only 2 strings.\n");
  }
  else
  { 
    int result = any(argv[1], argv[2]);

    if (result == -1)
    {
      printf("No occurrences found.\n");
    }
    else
    {
      printf("An occurrence was found at index %d.\n", result);
    }
  }
}

// Returns the first index where an occurrence of any character of s2 is found
// in s1.
int any(char* s1, char* s2)
{
  // Loop through all characters of s1
  for (int i = 0; s1[i] != '\0'; i++)
  {
    int j;

    // Loop through characters of s2 until a match is found or all characters
    // have been checked
    for (j = 0; s2[j] != '\0' && s1[i] != s2[j]; j++)
      ;

    // Check if a match was found
    if (s2[j] != '\0')
    {
      return i; // Return the current index in s1 if match was found
    }
  }

  return -1; // No matches were found for any characters of s1
}

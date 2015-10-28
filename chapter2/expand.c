/**
 * expand.c
 *
 * Kelvin Wong
 * kwong691@gmail.com
 *
 * Converts tabs and newlines to visible escape sequences
 */

#include <stdio.h>

#define MAXLENGTH 1000

void expand(char* s, char* t);

int main(int argc, char* argv[])
{
  if (argc != 2)
  {
    printf("Please include a string to expand.\n");
    return 1;
  }
  else
  {
    // TODO(kelvin): Use inputted argument to expand
    // The program does not seem to recognize escape sequences in the argument,
    // i.e., the argument is taken literally
    char* input = "\thello\nmell\to";
    char expanded[MAXLENGTH];
    expand(input, expanded);
    printf("Original string:\n%s\n\nExpanded string:\n%s\n", input, expanded);
  }
}

// Converts tabs and newlines to visible escape sequences as s is copied to t
// Expanded string should be fewer than 999 characters.
void expand(char* s, char* t)
{
  int j = 0;

  // Loop through all characters in s
  for (int i = 0; s[i] != '\0'; i++)
  {
    switch (s[i])
    {
      case '\n':
        t[j++] = '\\';
        t[j++] = 'n';
        break;
      case '\t':
        t[j++] = '\\';
        t[j++] = 't';
        break;
      default:
        t[j++] = s[i];
    }
  }

  t[j] = '\0'; // End the expanded string
}

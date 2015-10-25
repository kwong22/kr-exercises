/**
 * squeeze.c
 *
 * Kelvin Wong
 * kwong691@gmail.com
 *
 * Removes all occurrences of characters in second string from first string
 */

#include <stdio.h>

void squeeze(char* s1, char* s2);

int main(int argc, char* argv[])
{
  if (argc != 3)
  {
    printf("Please include only 2 strings.\n");
  }
  else
  { 
    squeeze(argv[1], argv[2]);
    printf("%s\n", argv[1]);
  }
}

// Removes all characters in s2 from s1
void squeeze(char* s1, char* s2)
{
  int k = 0; // Current position in s1 to add to

  // Loop through all characters of s1
  for (int i = 0; s1[i] != '\0'; i++)
  {
    int j;

    // Loop through characters of s2 until a match is found or all characters
    // have been checked
    for (j = 0; s2[j] != '\0' && s1[i] != s2[j]; j++)
      ;

    // Check if a match was found
    if (s2[j] == '\0')
    {
      s1[k++] = s1[i]; // Add character if match was not found
    }
  }

  s1[k] = '\0'; // Create new end to modified string
}

// Program to extract a substring from a string

#include <stdio.h>

// Declare Functions
void substring (const char [], int, int, char []);

int main(void) {

  char input[] = { "This is the input string." };
  char output[15];

  printf ("Input: %s\n", input);

  substring (input, 5, 35, output);
  printf ("Output: %s\n", output);

  char result [50];
  substring ("Two words.", 4, 20, result);
  printf ("Result: %s\n", result);
  
  return 0;
}

// Define Functions
void substring (const char source[], int start, int count, char result[]) {
  // Find length of string
  int stringLength = 0;
  for (int j = 0; source[j] != '\0'; j++) {
    stringLength++;
  }

  // Copy string
  int i;
  for (i = 0; i < count && i < stringLength; i++) {
    result[i] = source[start + i];
  }
  result[i + 1] = '\0';
}
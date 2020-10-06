#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  string s = get_string("Input: ");
  printf("Output: ");
  for (int i = 0; s[i] != '\0'; i++) {
    printf("%c", s[i]);
  }
  printf("\n");
  
  printf("Output: ");
  int n = strlen(s);
  for (int i = 0; i < n; i++) {
    printf("%c", s[i]);
  }
  printf("\n");

  printf("Output: ");
  for (int i = 0, length = strlen(s); i < length; i++) {
    printf("%c", s[i]);
  }
  printf("\n");
}

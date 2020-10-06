#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char* s = get_string("s: ");
  char* t = malloc(strlen(s) + 1);
  if (t == NULL) {
    return 1;
  }

  for (int i = 0, n = strlen(s); i <= n; i++) {
    t[i] = s[i];
    //*(t + i) = *(s + i);
  }
  
  if (strlen(t) > 0) {
    t[0] = toupper(t[0]);
    //*t = toupper(t[0]);
  }

  char* u = malloc(strlen(s) + 1);
  strcpy(u, s);
  if (strlen(u) > 1) {
    u[1] = toupper(u[1]);
  }

  printf("s: %s\n", s);
  printf("t: %s\n", t);
  printf("u: %s\n", u);

  free(t);
  free(u);
}

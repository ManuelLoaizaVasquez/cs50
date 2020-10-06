#include <stdio.h>

int main(void) {
  int n = 50;
  printf("%i\n", n);
  printf("%p\n", &n);
  int* p = &n;
  printf("%i\n", *p);
  printf("%p\n", p);
}

#include <cs50.h>
#include <stdio.h>

void row(void) {
  // Get positive integer from user
  int n;
  do {
    n = get_int("Width: ");
  } while (n < 1);

  // Print out that many question marks
  for (int i = 0; i < n; i++) {
    printf("?");
  }
  printf("\n");
}

void block(void) {
  // Get positive integers from user
  int n, m;
  do {
    n = get_int("Width: ");
  } while (n < 1);
  do {
    m = get_int("Height: ");
  } while (m < 1);
  
  // Print an n * m # block 
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("#");
    }
    printf("\n");
  }
}

int main(void) {
  row();
  block();
}

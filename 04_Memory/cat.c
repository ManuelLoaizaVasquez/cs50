#include <stdio.h>

int main(int argc, char* argv[]) {
  // Chequeo que tenga exactamente una cadena
  if (argc != 2) {
    return 1;
  }

  FILE* file = fopen(argv[1], "r");
  // Chequeo que el archivo exista
  if (file == NULL) {
    return 1;
  }

  char ch;
  while ((ch = fgetc(file)) != EOF) {
    printf("%c", ch);
  }
  return 0;
}

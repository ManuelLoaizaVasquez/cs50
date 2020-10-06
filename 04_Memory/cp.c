#include <stdio.h>

int main(int argc, char* argv[]) {
  if (argc != 3) {
    return 1;
  }

  FILE* in = fopen(argv[1], "r");
  FILE* out = fopen(argv[2], "w");

  if (in == NULL) {
    return 1;
  }

  char ch;
  while ((ch = fgetc(in)) != EOF) {
    fputc(ch, out);
  }

  fclose(in);
  fclose(out);
  return 0;
}

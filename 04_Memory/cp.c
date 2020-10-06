#include <stdio.h>

int main(int argc, char* argv[]) {
  if (argc != 3) {
    return 1;
  }

  // Open input file
  FILE* in = fopen(argv[1], "r");
  if (in == NULL) {
    printf("Could not open %s.\n", argv[1]);
    return 1;
  }

  // Open output file
  FILE* out = fopen(argv[2], "w");
  if (out == NULL) {
    fclose(in);
    printf("Could not create %s.\n", argv[2]);
    return 1;
  }

  // Copy source to destination, one character at a time
  char ch;
  while ((ch = fgetc(in)) != EOF) {
    fputc(ch, out);
  }

  // Close files
  fclose(in);
  fclose(out);
  return 0;
}

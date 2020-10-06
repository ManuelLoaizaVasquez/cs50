#include <stdint.h>
#include <stdio.h>

typedef uint8_t Byte;

int main(int argc, char* argv[]) {
  // Check usage
  if (argc != 2) {
    return 1;
  }

  // Open a file
  FILE* file = fopen(argv[1], "r");
  if (file == NULL) {
    return 1;
  }

  // Read first three bytes
  Byte bytes[3];
  fread(bytes, sizeof(Byte), 3, file);

  // Check first three bytes
  if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff) {
    printf("Maybe\n");
  } else {
    printf("No\n");
  }
  return 0;
}

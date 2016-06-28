#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib_roman.h"

int main(int argc, char **argv) {
  char* result;
  if(argc != 4) {
    printf("usage: roman_math <roman> [+/-] <roman>\n");
    exit(1);
  }
  char *a = uppercased_roman(argv[1]);
  char *b = uppercased_roman(argv[3]);

  if(strcmp(argv[2], "+") == 0) {
    result = roman_add(a, b);
  } else {
    result = roman_subtract(a, b);
  }

  printf("%s\n", result);
  free(a);
  free(b);
  free(result);

  return 0;
}

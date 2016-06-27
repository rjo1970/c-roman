#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include "lib_roman.h"

char *uppercased_roman(char *lowercased) {
    char *upper = calloc(1, strlen(lowercased) + 1);
    assert(upper != NULL);

    int i =0;
    while(lowercased[i] != '\0') {
      upper[i] = (char) toupper(lowercased[i]);
      ++i;
    }
    return upper;
}

int can_replace(char *haystack, char *needle) {
  return strstr(haystack, needle) != NULL;
}

char *replace_substring(char *haystack, char *needle, char *needle_replacement) {
  char *result;
  char *p = strstr(haystack, needle);
  char *buffer = calloc(1, strlen(haystack) + strlen(needle_replacement) + 1);
  strcpy(buffer, haystack);
  int ndx = p - haystack;
  strcpy(buffer + (ndx * sizeof(char)), needle_replacement);
  result = strdup(buffer);
  free(buffer);
  return result;
}

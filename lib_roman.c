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

char *replace_substring(char *haystack, char *needle, char *needle_replacement) {
  char *result;
  char *p = strstr(haystack, needle);
  if (p == NULL) {
    result = strdup(haystack);
    return result;
  }
  char *pend = p + strlen(needle);

  char *buffer = calloc(1, strlen(haystack) + strlen(needle_replacement) + 1);
  assert(buffer != NULL);

  strcpy(buffer, haystack);
  char* start = buffer + ((p - haystack) * sizeof(char));
  sprintf(start, "%s%s", needle_replacement, pend);

  result = strdup(buffer);
  assert(result != NULL);
  free(buffer);
  return result;
}

char *simplify_roman(char *roman) {
  int i;
  char *result;
  char *intermediate = strdup(roman);
  for(i = 0; i< TRANSLATION_SIZE; ++i) {
    result = replace_substring(intermediate, proper_translation[i], simple_translation[i]);
    free(intermediate);
    intermediate = result;
  }
  return result;
}

int roman_to_integer(char *roman) {
  int i=0;
  int j=0;
  int value=0;
  char *simplified = simplify_roman(roman);
  char *p = simplified;
  do {
    while( p[0] == romans[i]) {
      value += roman_values[i];
      ++p;
    }
    ++i;
  } while(*p);
  free(simplified);
  return value;
}

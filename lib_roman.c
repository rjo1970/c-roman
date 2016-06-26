#include <stdlib.h>
#include <assert.h>
#include <ctype.h>

char *uppercased_roman(char *lowercased) {
    char *upper = calloc(1, strlen(lowercased) + 1);
    assert(upper != NULL);

    int i =0;
    while(lowercased[i] != '\0') {
      upper[i] = toupper(lowercased[i]);
      ++i;
    }
    return upper;
}

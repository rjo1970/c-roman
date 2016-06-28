#ifndef _LIB_ROMAN_H
#define _LIB_ROMAN_H

#define TRANSLATION_SIZE 6
static const char *proper_translation[TRANSLATION_SIZE] =
 { "IV", "IX", "XL", "XC", "CD", "CM" };
static const char *simple_translation[TRANSLATION_SIZE] =
 {"IIII", "VIIII", "XXXX", "LXXXX", "CCCC", "DCCCC"};

#define ROMAN_SIZE 7
static const char romans[ROMAN_SIZE] = { 'M', 'D', 'C', 'L', 'X', 'V', 'I'};
static const int roman_values[ROMAN_SIZE] = { 1000, 500, 100, 50, 10, 5, 1};

char *uppercased_roman(char *lowercased);
char *roman_add(char *a, char *b);
char *roman_subtract(char *a, char *b);

#endif

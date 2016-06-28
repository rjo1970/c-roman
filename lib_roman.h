#ifndef _lib_roman_h
#define _lib_roman_h

#define TRANSLATION_SIZE 1
char *proper_translation[TRANSLATION_SIZE] = { "IV" };
char *simple_translation[TRANSLATION_SIZE] = {"IIII"};

#define ROMAN_SIZE 7
char *romans[ROMAN_SIZE] = { "M", "D", "C", "L", "X", "V", "I"};
int roman_values[ROMAN_SIZE] = { 1000, 500, 100, 50, 10, 5, 1};

#endif

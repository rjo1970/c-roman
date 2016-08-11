#pragma once

#define TRANSLATION_SIZE 6

#define ROMAN_SIZE 7

#define MAX_ROMAN_LENGTH 16

#define MAX_ROMAN_VALUE 3999

char *uppercased_roman(char *lowercased);
char *roman_add(char *a, char *b);
char *roman_subtract(char *a, char *b);
int valid_roman(char *candidate);

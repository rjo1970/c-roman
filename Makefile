CFLAGS=-Wall -g

all: clean roman_math test

clean:
	rm -rf roman_math roman_math.dSYM \
	  test/*test test/*.c

test: roman_math roman_strings_test
	./test/roman_strings_test

roman_strings_test: .checkmk
	cc ./test/roman_strings_test.c -g -lcheck -lc -o ./test/roman_strings_test

.checkmk:
	checkmk ./test/roman_strings_test.check > ./test/roman_strings_test.c

/*
 * Exercise1-11.c
 *
 *  Created on: Sep 12, 2019
 *      Author: beef
 *
 * Commented out for build sake, just uncomment to make it work


#include <stdio.h>

#define IN 	1 	// Inside a word
#define OUT 0	// Outside a word

// Count lines, words, and characters in input

int main() {
	int c, newline, words, characters, state;

	state = OUT;
	newline = words = characters = 0;

	while ((c = getchar()) != EOF) {
		++characters;
		if (c == '\n')
			++newline;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++words;
		}
	}
	printf("\nLines: %d, Words: %d, Characters: %d\n", newline, words, characters);

	return 0;
}
*/
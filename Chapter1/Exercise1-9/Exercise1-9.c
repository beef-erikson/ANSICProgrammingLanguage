/*
 * Exercise1-9.c
 *
 *  Created on: Sep 12, 2019
 *      Author: beef
 *
 * Commented out for build sake, just uncomment to make it work


#include <stdio.h>

// Copies input to output, replacing each string with one or more blanks with one blank

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar(c);
			while ((c = getchar()) == ' ') {
				;
			}
		}
		putchar(c);
	}
	return 0;
}
*/
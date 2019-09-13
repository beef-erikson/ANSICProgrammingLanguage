/*
 * Exercise1-10.c
 *
 *  Created on: Sep 12, 2019
 *      Author: beef
 *
 * Commented out for build sake, just uncomment to make it work


#include <stdio.h>

// Replaces tab, backspace and / with the escape characters instead

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			putchar('\\');
			putchar('t');
			c = getchar();
		}
		// note that backspace doesn't show in linux from input
		if (c == '\b') {
			putchar('\\');
			putchar('b');
			c = getchar();
		}
		if (c == '\\') {
			putchar('\\');
			putchar('\\');
			c = getchar();
		}
		putchar(c);
	}

	return 0;
}
*/
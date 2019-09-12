/*
 * Exercise1-8.c
 *
 *  Created on: Sep 12, 2019
 *      Author: beef
 */

#include <stdio.h>

/* Counts blanks, tabs, and newlines from input */

int c;
int blank, tab, newline;

int main() {
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++blank;
		if (c == '\t')
			++tab;
		if (c == '\n')
			++newline;
	}
	printf("\nNumber of blanks: %d", blank);
	printf("\nNumber of tabs: %d", tab);
	printf("\nNumber of newlines: %d", newline);

	return 0;
}

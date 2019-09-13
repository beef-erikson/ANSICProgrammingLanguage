/*
 * Exercise1-12.c
 *
 *  Created on: Sep 13, 2019
 *      Author: beef
 */

#include <stdio.h>

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			putchar('\n');
		else
			putchar(c);
	}

	return 0;
}

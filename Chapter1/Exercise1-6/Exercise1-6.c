/*
 * Exercise1-6.c
 *
 *  Created on: Sep 12, 2019
 *      Author: beef
 */

#include <stdio.h>

/* Copy input to output */

int main() {
	int c;

	/* The correct way to do it:
	while((c = getchar()) != EOF) {
		putchar(c);
	}
	*/

	/* The incorrect way, != takes precedence over =  */
	while(c = getchar() != EOF) {
		putchar(c);
	}

	return 0;
}

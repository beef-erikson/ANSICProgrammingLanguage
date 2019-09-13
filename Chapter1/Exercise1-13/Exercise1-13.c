/*
 * Exercise1-13.c
 *
 *  Created on: Sep 13, 2019
 *      Author: beef
 */

#include <stdio.h>

/* Histogram of the length of words from input */

int main() {
	int c, i;
	int letters;
	int count1, count2, count3, count4, count5, count6, count7Plus;

	count1 = count2 = count3 = count4 = count5 = count6 = count7Plus = 0;
	letters = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (letters == 1)
				count1++;
			else if (letters == 2)
				count2++;
			else if (letters == 3)
				count3++;
			else if (letters == 4)
				count4++;
			else if (letters == 5)
				count5++;
			else if (letters == 6)
				count6++;
			else if (letters >= 7)
				count7Plus++;
			else
				;
			letters = 0;
		}
		else
			letters++;
	}

	printf("\n\nNumber of times length of word is used\n");
	printf("--------------------------------------\n\n");

	printf("One letter: ");
	for (i = 0; i < count1; ++i)
		printf("*");
	printf("\n");

	printf("Two letters: ");
	for (i = 0; i < count2; ++i)
		printf("*");
	printf("\n");

	printf("Three letters: ");
	for (i = 0; i < count3; ++i)
		printf("*");
	printf("\n");

	printf("Four letters: ");
	for (i = 0; i < count4; ++i)
		printf("*");
	printf("\n");

	printf("Five letters: ");
	for (i = 0; i < count5; ++i)
		printf("*");
	printf("\n");

	printf("Six letters: ");
	for (i = 0; i < count6; ++i)
		printf("*");
	printf("\n");

	printf("Seven or more letters: ");
	for (i = 0; i < count7Plus; ++i)
		printf("*");
	printf("\n\n");

	return 0;
}

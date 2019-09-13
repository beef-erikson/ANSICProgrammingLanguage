/*
 * Exercise1-14.c
 *
 *  Created on: Sep 13, 2019
 *      Author: beef
 */

#include <stdio.h>

/* Histogram of different characters in input */

int main() {

	int c, i;
	int tabCount, newlineCount, spaceCount, otherCount;

	tabCount = newlineCount = spaceCount = otherCount = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\t')
			tabCount++;
		else if (c == ' ')
			spaceCount++;
		else if (c == '\n')
			newlineCount++;
		else
			otherCount++;
	}

	printf("\n\nNumber of times various characters are used\n");
	printf("---------------------------------------\n\n");

	printf("Tabs: ");
	for (i = 0; i < tabCount; ++i)
		printf("*");
	printf("\n");

	printf("Newlines: ");
	for (i = 0; i < newlineCount; ++i)
		printf("*");
	printf("\n");

	printf("Whitespace: ");
	for (i = 0; i < spaceCount; ++i)
		printf("*");
	printf("\n");

	printf("Others: ");
	for (i = 0; i < otherCount; ++i)
		printf("*");
	printf("\n");

	return 0;
}

/*
 * Exercise1-5.c
 *
 *  Created on: Sep 12, 2019
 *      Author: beef
 */

#include <stdio.h>

/* Print Fahrenheit to Celsius table in reverse order */

int main() {
	int fahr;

	for (fahr = 300; fahr >= 0; fahr -= 20) {
		printf("%3d%8.1f\n", fahr, (5.0 / 9.9) * (fahr - 32));
	}

	return 0;
}

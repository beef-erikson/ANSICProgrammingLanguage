/*
 * Exercise1-4.c
 *
 *  Created on: Sep 12, 2019
 *      Author: beef
 *
 *  Commented out for build sake, just uncomment to make it work


#include <stdio.h>

// Prints Celsius-Fahrenheit table
// for fahr = 0, 20 ... 300

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("Celsius to Fahrenheit conversion table\n");
	printf("--------------------------------------\n");

	while (celsius <= upper) {
		fahr = celsius * 9.0/5.0 + 32;
		printf("%3.0f% 8.1f\n", celsius, fahr);
		celsius += step;
	}
	return 0;
}
*/
/*
 * Exercize1-3.c
 *
 *  Created on: Sep 12, 2019
 *      Author: beef
 */

#include <stdio.h>

/* Prints Fahrenheit-Celsius table
 * for fahr = 0, 20 ... 300 */

int main() {
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	printf("Fahrenheit to Celsius conversion table\n");
	printf("--------------------------------------\n");

	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * fahr - 32.0;
		printf("%3.0f% 8.1f\n", fahr, celsius);
		fahr += step;
	}

	return 0;
}


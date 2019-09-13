//
// Created by beef on 9/13/19.
//
/* Commented for building sake, just uncomment for it to work

#include <stdio.h>

// Rewrites temperature conversion from exercises 1-3/1-4 to use functions

void FahrToCelsius(int fahr);
void CelsiusToFahr(float celsius);

int main() {
    FahrToCelsius(32);
    CelsiusToFahr(0);

    return 0;
}

// Fahrenheit to Celsius
void FahrToCelsius(int fahr) {
    float celsius;
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%d Fahrenheit converts to %.1f celsius\n", fahr, celsius);
}

// Celsius to Fahrenheit
void CelsiusToFahr(float celsius) {
    int fahr;
    fahr = celsius * 9.0/5.0 + 32;
    printf("%.1f Celsius converts to %d Fahrenheit\n", celsius, fahr);
}
 */
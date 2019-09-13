//
// Created by beef on 9/13/19.
//
/*  Uncomment when ready for use, comment here for building

#include <stdio.h>
#define MINLEN          80

// prints all input lines that are longer than 80 characters
int main() {
    char buffer[MINLEN + 1];
    int c, n = 0;

    while (1) {
        c = getchar();
        if (c == EOF)
            break;

        // fewer than 80 chars
        if (n < MINLEN) {
            if (c == '\n')      // newline, reset
                n = 0;
            else {
                buffer[n++] = c;
                if (n == MINLEN) {
                    buffer[n] = '\0';
                    printf("%s", buffer);
                }
            }
        }

        // at least MINLEN in line
        else {
            putchar(c);
            if (c == '\n')
                n = 0;
        }
    }

    return 0;
}

 */
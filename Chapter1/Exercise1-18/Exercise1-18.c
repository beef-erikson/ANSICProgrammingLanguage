//
// Created by beef on 9/13/19.
//

#include <stdio.h>
#define MAXLEN  1000

// Write a program to remove trailing blanks and tabs from each line of input and delete entirely blank lines
int main() {
    char buffer[MAXLEN];
    int c, n = 0;

    while((c = getchar()) != EOF)
    {
        if (n < MAXLEN) {
            if (c == '\n') {
                if (buffer[n] == ' ')
                {
                    // TODO figure out logic why this isn't working. tried many things. need sleep.
                }
                buffer[n] = '\0';
                printf("%s\n", buffer);
                n = 0;
            }
            else {
                if (c != '\t')
                    buffer[n++] = c;
                else {
                    buffer[n++] = ' ';
                    while ((c = getchar()) == '\t')
                       ;
                    buffer[n++] = c;
                }
            }
        }
        // exceeds overflow - dump chars
        else {
            putchar(c);
            if (c == '\n')
                n = 0;
        }
    }

    return 0;
}
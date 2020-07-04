//
// Beef Erikson Studios - 2020
// Created on 7-4-2020, Troy Martin
// Detab program that replaces tabs with the appropriate number of spaces.
//

#include <stdio.h>

#define TABSPACES 3
#define MAXLEN 1000

int main()
{
    int c, n = 0;
    char buffer[MAXLEN];

    while ((c = getchar()) != EOF)
    {
        if (n < MAXLEN)
        {
            // Newline
            if (c == '\n')
            {
                buffer[n] = '\0';
                printf("%s\n", buffer);
                n = 0;
            }
            // Replace tabs with TABSPACES of spaces
            else if (c == '\t')
            {
                for (int i = 0; i < TABSPACES; i++)
                    buffer[n++] = ' ';
            }
            // Everything else
            else
            {
                buffer[n++] = c;
            }
        }
        else
        {
            // Buffer overflow, dump characters
            putchar(c);
            if (c == '\n')
                n = 0;
        }
    }

    return 0;
}
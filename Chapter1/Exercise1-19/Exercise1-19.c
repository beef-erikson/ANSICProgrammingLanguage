//
// Beef Erikson Studios - 2020
// Created on 7/3/2020.
// Function reverse(s) that reverses the character string s.
//

#include <stdio.h>
#define MAXLEN 1000

// Used in reverse function
int x = 0;
char string[MAXLEN];

// Takes character array (string) from input and reverses it
void reverse(char c)
{
    string[x] = c;

    if (c == '\0')
    {
        for (int a = x; a >= 0; a--)
            if (string[a] != '\0')
                printf("%c", string[a]);
        putchar('\n');
    }
    x++;
    if (c == '\0')
        x = 0;
}

int main()
{
    char buffer[MAXLEN];
    char c, n = 0;

    while ((c = getchar()) != EOF)
    {
        if (n < MAXLEN)
        {
            // Newline, send to reverse
            if (c == '\n')
            {
                buffer[n] = '\0';
                for (int x = 0; x <= n; x++)
                    reverse(buffer[x]);
                n = 0;
            }
            else
            {
                buffer[n++] = c;
            }
        }
        // Overflow hit, dump characters
        else
        {
            putchar(c);
            if (c == '\n')
                n = 0;
        }
    }

    return 0;
}
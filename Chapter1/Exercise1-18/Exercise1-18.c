//
// Beef Erikson Studios - 2020
// Started on 9/13/19.
// Finished on 7/3/20 (Jeez.)
//

#include <stdio.h>
#define MAXLEN 1000

// Write a program to remove trailing blanks and tabs from each line of input.
int main()
{
    char buffer[MAXLEN];
    int c, n = 0, tabCount = 0, spaceCount = 0;

    while ((c = getchar()) != EOF)
    {
        if (n < MAXLEN)
        {
            // Newline; print buffer
            if (c == '\n')
            {
                buffer[n] = '\0';
                printf("%s\n", buffer);
                n = 0;
            }
            // Tab; strip characters that are more than one tab
            else if (c == '\t') {
                tabCount++;
                if (tabCount > 1)
                    continue;
                buffer[n++] = ' ';
            }
            // Space; strip any trailing spaces
            else if (c == ' ')
            {
                spaceCount++;
                if (spaceCount > 1)
                    continue;
                buffer[n++] = ' ';
            }
            // Everything else
            else {
                buffer[n++] = c;
                tabCount = 0;
                spaceCount = 0;
            }
        }

        // Exceeds overflow - dump chars
        else
        {
            putchar(c);
            if (c == '\n')
                n = 0;
        }
    }

    return 0;
}
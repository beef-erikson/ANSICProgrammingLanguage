//
// Created by beef on 9/13/19.
//
/*  Uncomment when ready for use, comment here for building
#include <stdio.h>

#define MAXLINE 1000 // max line size

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

// Prints longest input line
int main() {
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getLine(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("Length: %d String: %s", len, longest);
    return 0;
}

// read a line into s, return length
int getLine(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

// copy 'from' into 'to'; assume to is big enough
void copy(char to[], char from[]) {
    int i;

    i = 0;
    while ((to[i] = from[i]) != 0)
        ++i;
}
 */
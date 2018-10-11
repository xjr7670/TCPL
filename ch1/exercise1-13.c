#include <stdio.h>

/* exercise1-13 write a program to print a histogram of the lengths of words in its input. */


void main()
{
    int c, nc;

    nc = 0;
    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            ++nc;
            putchar(c);
        } else {
            printf(" %d\n", nc);
            nc = 0;
        }
    }
}

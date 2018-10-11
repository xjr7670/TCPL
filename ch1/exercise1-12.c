#include <stdio.h>

/* wirte a program that prints its input one word per line. */

#define IN 1
#define OUT 0

void main()
{
    int c, state;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            printf("\n");
        } else {
            putchar(c);
        }
    }
}

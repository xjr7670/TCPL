#include <stdio.h>

/* exercise1-8: Write a program to count blanks, tabs, and newlines. */

void main()
{
    int c, blanks, tabs, newlines;

    blanks = tabs = newlines = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++newlines;
        }
        if (c == ' ') {
            ++blanks;
        }
        if (c == '\t') {
            ++tabs;
        }
    }
    printf("blanks: %3d, tabs: %3d, newlines: %3d\n", blanks, tabs, newlines);
}

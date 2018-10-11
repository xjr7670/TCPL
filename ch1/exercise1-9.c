#include <stdio.h>

/* exercise1-9: write a program to copy its input to its output, 
 * replacing each string of one or more blanks by a single blank.
 */

void main()
{
    int c, blanks;

    blanks = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++blanks;
            if (blanks >= 2) {
                c = '\b';
                --blanks;
            }
        } else {
            blanks = 0;
        }
        putchar(c);
    }
}

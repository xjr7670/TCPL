#include <stdio.h>

/* exercise1-14: write a program to print a histogram of the frequencies of different characters in its input.*/

void main()
{
    int c, i;
    int ncharacter[26];

    for (i = 0; i < 26; ++i) {
        ncharacter[i] = 0;
    }
    while((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            ++ncharacter[c-'a'];
        }
    }
    printf("a-z have: \n");
    for (i = 0; i < 26; ++i) {
        printf("%2d\n", ncharacter[i]);
    }
    printf("times\n");
}

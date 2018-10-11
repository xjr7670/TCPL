#include <stdio.h>
#include <string.h>

/* exercise1-19: write a function reverse(s) that reverses the character string s.
 * Use it to write a program that reverses its input a line at a time.
 */

#define MAXLINE 1000

int getlines(char line[], int lim);
int reverse(char s[], char s1[]);

void main()
{
    int len;
    char string1[MAXLINE];
    char string2[MAXLINE];
    
    len = getlines(string1, MAXLINE);
    reverse(string1, string2);
    printf("string1: %s,\nstring2: %s\n", string1, string2);

}


/* getlines: read a line into s, return length */
int getlines(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int reverse(char s1[], char s2[])
{
    int i;

    for (i = strlen(s1) - 1; i >= 0; i--) {
        s2[strlen(s1) - 1 - i] = s1[i];
    }
    s2[strlen(s2)] = '\0';

    return 0;
}

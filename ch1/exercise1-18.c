#include <stdio.h>

/* exercise1-18: write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines */

#define MAXLINE 1000        /* maximum input line size */

int getlines(char line[], int maxline);
void tail(char line[], int len);

/* print longest input line */
int main()
{
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */

    while ((len = getlines(line, MAXLINE)) > 0) {
        tail(line, len);
        printf("%s", line);
    }
    return 0;
}

/* getline: read a line into s, return length */
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

void tail(char s[], int len)
{
    int i;
    int notLast;

    notLast = 0;

    for (i = len - 1; i >= 0; i--) {
        if ((s[i] == ' ' || s[i] == '\t') && notLast == 0) {
            s[i] = '\0';
        } else {
            notLast = 1;
        }
    }
}

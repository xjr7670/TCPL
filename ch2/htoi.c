#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int htoi(char s[]);

int main(int argc, char const *argv[])
{
    char s[100];
    int i, int_s;
    char c = ' ';

    for (i = 0; (c = getchar()) != EOF && i < 100; i++) {
        s[i] = c;
    }

    int_s = htoi(s);
    printf("%d\n", int_s);

    return 0;
}

int htoi(char s[])
{
    int i=0, result=0, len=0;
    len = strlen(s) - 1;
    if (len >2 && s[0] == '0' && tolower(s[1]) == 'x') {
        i = 2;
    }
    for (; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            printf("i=%d\ts[%d]=%d\tlen-1-i=%d\n", i, i, s[i], len-1-i);
            result += (s[i] - '0') * pow(16, len-1-i);
        } else if (tolower(s[i]) >= 'a' && tolower(s[i]) <= 'f') {
            printf("i=%d\ts[%d]=%c\tlen-1-i=%d\n", i, i, s[i], len-1-i);
            result += (s[i] - 'W') * pow(16, len-1-i);
        }
    }

    return result;
}

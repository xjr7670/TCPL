#include <stdio.h>

int atoi(char s[]);

int main()
{
    char s[5];
    int i;

    for (i = 0; i < 10; i++) {
        scanf("%c", &s[i]);
    }
    i = atoi(s);
    printf("%d\n", i);
}

/* atoi: convert s to integer */
int atoi(char s[])
{
    int i, n;

    n = 0;
    printf("%d\n", n);
    for (i = 0; s[i] >= 'a' && s[i] <= 'z'; ++i) {
        n = 10 * n + (s[i] - '0');
        printf("%d \n", n);
    }

    return n;
}

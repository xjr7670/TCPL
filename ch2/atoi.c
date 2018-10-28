#include <stdio.h>

int atoi(char s[]);

int main()
{
    char s[5] = "12345";
    int i;

    i = atoi(s);
    printf("%d\n", i);
}

/* atoi: convert s to integer */
int atoi(char s[])
{
    int i, n;

    n = 0;
    printf("%d\n", n);
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
        n = 10 * n + (s[i] - '0');
        printf("%d \n", n);
    }

    return n;
}

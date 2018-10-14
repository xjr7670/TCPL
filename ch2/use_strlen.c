#include <stdio.h>

int main()
{
    char arr[8];
    int len, i=0;

    do {
        arr[i] = getchar();
        i++;
    } while (i<8);
    len = strlen(arr);
    printf("%d\n", len);

    return 0;
}


/* strlen: return length of s */
int strlen(char s[])
{
    int i=0;

    while (s[i] != '\0') {
        ++i;
    }

    return i;
}

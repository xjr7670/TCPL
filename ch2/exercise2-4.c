#include <stdio.h>

int squeeze(char s1[], char s2[]);

int main()
{
    char s1[7] = "abcdefg";
    char s2[3] = "dgk";

    squeeze(s1, s2);

    return 0;
}

int squeeze(char s1[], char s2[])
{
    int i, j, k=0, flag;
    
    for (i = 0; s1[i] != '\0'; i++) {
        flag = 1;
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                flag = 0;
            }
        }
        if (flag == 1) {
            s1[k++] = s1[i];
        }
    }
    s1[k] = '\0';
    
    for (i = 0; s1[i] != '\0'; i++) {
        printf("%c", s1[i]);
    }
    
    return 0;
}

#include <stdio.h>

int any(char s1[], char s2[]);

int main()
{
    char s1[7] = "abcdefg";
    char s2[3] = "fgk";
    int local;

    local = any(s1, s2);
    printf("%d\n", local);

    return 0;
}

int any(char s1[], char s2[])
{
    int i, j, k=0, flag=-1;
    
    for (i = 0; s1[i] != '\0'; i++) {
        for (j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                flag = i;
                break;
            }
        }
        if (flag != -1) {
            break;
        }
    }
    s1[k] = '\0';
    
    return flag;
}

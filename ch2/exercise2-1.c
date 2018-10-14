#include <stdio.h>

int main()
{
    int i;
    signed int sge_i;
    unsigned int usge_i;
    short int sor_i;
    long int lng_i;

    int t=0;
   
    lng_i = 1; 
    i = lng_i;
    while(t != i) {
        printf("i=%d\n", i);
        t = i;
        i = i << 1;
    }
    printf("t=%d\n", t);

    return 0;
}

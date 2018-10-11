#include <stdio.h>

/* rewrite the temperature conversion program of Section 1.2 too use a function for conversion. */

float fahr(int c);

int main()
{
    int lower, upper, step;
    float f;
    lower = 0;
    upper = 300;
    step = 20;

    while (lower <= upper) {
        f = fahr(lower);
        printf("%3d %5.0f\n", lower, f);
        lower += step;
    }
}

float fahr(int c)
{
    float f;
    f = (c * 9) / 5 + 32;
    return f;
}

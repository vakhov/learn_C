// Fahrenheit to Celsius
#include <stdio.h>

int main()
{
    int  fahr, celsius;
    int lower, upper, step;

    lower = 0;  // bottom line
    upper = 300;  // upper bound
    step = 20;  // step size

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("F - %d\tC - %d\n", fahr, celsius);
        fahr += step;
    }
    
    return 0;
}

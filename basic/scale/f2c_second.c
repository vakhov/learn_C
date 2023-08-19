// Fahrenheit to Celsius
#include <stdio.h>

int main()
{
    float  fahr, celsius;
    int lower, upper, step;

    lower = 0;  // bottom line
    upper = 300;  // upper bound
    step = 20;  // step size

    fahr = lower;
    printf("%s\t%s\n", "Fahrenheit", "Celsius");
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%6.0f\t\t%6.1f\n", fahr, celsius);
        fahr += step;
    }

    return 0;
}

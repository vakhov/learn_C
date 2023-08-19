// Celsius to Fahrenheit
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;  // bottom line
    upper = 100;    // upper bound
    printf("Set step (int): ");
    scanf("%d", &step);  // step size

    celsius = lower;
    printf("Celsius\tFahrenheit\n");
    while (celsius <= upper)
    {
        fahr = (celsius * 9.0) / 5.0 + 32.0;
        printf("%4.1f\t%5.1f\n", celsius, fahr);
        celsius += step;
    }
    

    return 0;
}


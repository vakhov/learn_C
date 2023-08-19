// Fahrenheit to Celsius
#include <stdio.h>

#define LOWER   0     /* нижняя граница */
#define UPPER   300   /* верхняя граница */
#define STEP    20    /* размер шага */
#define FORMAT  "%3d %6.1f\n"

int main()
{
    for (int fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        printf(FORMAT, fahr, (5.0 / 9.0) * (fahr - 32));
    }
    
    return 0;
}

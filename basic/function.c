#include <stdio.h>

/* возможные формы объявления прототипа задания прототипа функции */
// int power(int m, int n);
int power(int, int);

/* тестирование power - функция возведения в степень */
int main()
{
    int i;

    for (i = 0; i < 10; i++)
        printf("%5d %5d %6d\n", i, power(2, i), power(-3, i));
    
    return 0;
}

/* power: возводит base в n-ю степень; n >= 0 */
int power(base,  n)
int base, n;
{
    int i, p;
    p = 1;
    for (i = 1; i <= n; i++)
        p = p * base;
    return p;
}
#include <stdio.h>

/* возможные формы объявления прототипа задания прототипа функции */
// int power(int m, int n);
int power(int, int);

/* тестирование power - функция возведения в степень */
int main()
{
    for (int i = 0; i < 10; i++)
        printf("%5d %5d %6d\n", i, power(2, i), power(-3, i));
    
    return 0;
}

/* power: возводит base в n-ю степень; n >= 0; 2-я версия */
int power(int base, int n)
{
    int p;

    for (p = 1;  n > 0; --n)
        p = p * base;
    return p;
}

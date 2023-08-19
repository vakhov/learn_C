// Подсчёт кол-ва символов
#include <stdio.h>

int main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    
    printf("%ld\n", nc);
    return 0;
}

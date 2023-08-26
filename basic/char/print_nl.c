// Вывод входного потока в новой строке
#include <stdio.h>
#include "main.h"

int main()
{
    int c;

    while ((c = getchar()) != EOF){
        if (c == WHITE_SPACE || c == NEW_LINE || c == TAB)
            printf("\n");
        else
            putchar(c);
    }

    return 0;
}

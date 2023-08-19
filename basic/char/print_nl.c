// Вывод входного потока в новой строке
#include <stdio.h>
#define WHITE_SPACE ' '
#define NEW_LINE    '\n'
#define TAB         '\t'

int main()
{
    int c;

    while ((c = getchar()) != EOF){
        if (c == WHITE_SPACE || c == NEW_LINE || c == TAB)
            printf("\n");
        else
            printf("%c", c);
    }

    return 0;
}

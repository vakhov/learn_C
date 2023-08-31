#include <stdio.h>

int div(int, int);
void f(void);

int main() {
    f();
    return 0;
}

int div(int a, int b) {
    int c = a - b;
    int res = a / c;
    return res;
}

void f() {
    div(1, 2);
    div(1, 3);
    div(0, 2);
    div(10, 10);
    div(3, 2);
}
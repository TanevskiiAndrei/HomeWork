#include <stdio.h>

int main()
{
    int a, b, c, number, max;
    scanf ("%d", &number);
    a = (number / 100) % 10;
    b = (number / 10) % 10;
    c =  number % 10;
    max = (a>b) ? a : b;
    max = (max>c) ? max : c;
    printf("%d", max);
    return 0;
}


#include <stdio.h>

int main()
{
    int number,mult;
    scanf ("%d", &number);
    mult = number % 10;
    mult *= (number / 10) % 10;
    mult *= (number / 100) % 10;
    printf("%d" ,mult);
    return 0;
}


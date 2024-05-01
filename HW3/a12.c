#include <stdio.h>

int main()
{
    int number,sum;
    scanf ("%d", &number);
    sum = number % 10;
    sum += (number / 10) % 10;
    sum += (number / 100) % 10;
    printf("%d" ,sum);
    return 0;
}


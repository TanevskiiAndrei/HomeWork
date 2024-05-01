#include <stdio.h>

int main()
{
    int number, a, b, equals = 0;
    scanf ("%d", &number);
    while(number > 0)
    {
        a = number % 10;
        b = (number/10) %10;
        if (a == b)
        {
            printf("YES");
            equals = 1;
            break;
        }
        number /= 10;
    }
    if(equals == 0)
    {
        printf("NO");
    }
    return 0;
}


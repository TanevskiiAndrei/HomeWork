#include <stdio.h>

int main()
{
    int number, a, count = 1;
    scanf ("%d", &number);
    while(number > 0)
    {
        a = number % 10;
        if(a % 2 != 0)
        {
            count = 0;
            break;
        }
        number /= 10;
    }
    if(count)
        printf("YES");
    else
        printf("NO");
    return 0;
}


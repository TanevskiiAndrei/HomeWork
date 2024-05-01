#include <stdio.h>

int main()
{
    int number, a,count = 0;
    scanf ("%d", &number);
    while(number > 0)
    {
        a = number % 10;
        if(a==9)
        {
           count++;
        }
        number /= 10;
    }
    if(count == 1)
        printf("YES");
    else
        printf("NO");
    return 0;
}


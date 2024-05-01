#include <stdio.h>

int main()
{
    int a, b,sum;
    scanf ("%d%d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        int square = i*i;
        sum += square;
    }
    printf("%d ",sum);
    return 0;
}


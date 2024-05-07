#include <stdio.h>

void PrintN(int N, int i)
{
    static int sum = 0;
    if(i <= N)
    {
        sum +=i;
        PrintN(N, i + 1);
    }
    if (i==N)
    {
        printf("%d", sum);
    }
}

int main()
{
    int N, i = 1;
    scanf("%d", &N);
    PrintN(N, i);
    return 0;
}

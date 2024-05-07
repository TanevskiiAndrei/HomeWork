#include <stdio.h>

void PrintN(int N)
{
    if(N < 10)
    {
        printf("%d ", N);
        return;
    }
    else
    {
        printf("%d ", N % 10);
        PrintN(N/10);
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    PrintN(N);
    return 0;
}

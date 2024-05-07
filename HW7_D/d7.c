#include <stdio.h>

void PrintN(int N)
{
    if (N == 0)
    {
        return;
    }
    else
    {
        printf("%d ", N);
        PrintN(N - 1);
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    PrintN(N);
    return 0;
}

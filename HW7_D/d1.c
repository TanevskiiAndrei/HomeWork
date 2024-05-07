#include <stdio.h>

void PrintN(int N, int i)
{
    if(i <= N)
    {
        printf("%d ", i);
        PrintN(N, i + 1);
    }
}

int main()
{
    int N, i = 1;
    scanf("%d", &N);
    PrintN(N, i);
    return 0;
}

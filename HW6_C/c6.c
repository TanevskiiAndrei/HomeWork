#include <stdio.h>

unsigned long  Res(unsigned long N)
{
    long result = 1;
    for (int i = 1; i < N; i++)
    {
        result *=2;
    }
    return result;
}
int main()
{
    unsigned long N;
    scanf("%lu", &N);
    printf("%lu", Res(N));
    return 0;
}



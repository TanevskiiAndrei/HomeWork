#include <stdio.h>

int Factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *=i;
    }
    return result;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", Factorial(n));
    return 0;
}



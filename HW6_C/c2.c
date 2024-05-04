#include <stdio.h>

int Power(int n, int p)
{
    int result = 1;

    for (int i = 0; i < p; i++)
    {
        result *= n;
    }
    return result;
}
int main()
{
    int n, p;
    scanf("%d%d", &n, &p);
    printf("%d", Power(n, p));
    return 0;
}



#include <stdio.h>

int Sum(int a)
{
    int summa = 0;
    for (int i = 0; i <= a; i++)
    {
        summa +=i;
    }
    return summa;
}
int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", Sum(a));
    return 0;
}



#include <stdio.h>

int IsHappyNumber(int n)
{
    int current_number, bool, sum = 0, mult = 1;
    while (n > 0)
    {
        current_number = n % 10;
        sum +=current_number;
        mult *=current_number;
        n /= 10;
    }
    if(sum == mult)
    {
        bool = 1;
    }
    else
    {
        bool = 0;
    }
    return bool;
}
int main()
{
    int n;
    scanf("%d", &n);
    IsHappyNumber(n) ? printf("YES"):printf("NO");
    return 0;
}



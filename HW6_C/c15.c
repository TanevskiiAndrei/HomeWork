#include <stdio.h>

int grow_up(int n)
{
    int last_number, current_number, bool = 1;
    while (n > 0)
    {
        current_number = n % 10;
        n /= 10;
        last_number = n % 10;
        if(last_number >= current_number )
        {
            bool = 0;
            break;
        }
    }
    return bool;
}
int main()
{
    int n;
    scanf("%d", &n);
    grow_up(n) ? printf("YES"):printf("NO");
    return 0;
}



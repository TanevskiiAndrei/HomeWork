#include <stdio.h>

void Abs(int a)
{
    if (a > 0)
    {
        printf("%d\n", a);
    }
    else
    {
        printf("%d\n", -a);
    }
}
int main() {
    int a;
    scanf("%d", &a);
    Abs(a);
    return 0;
}



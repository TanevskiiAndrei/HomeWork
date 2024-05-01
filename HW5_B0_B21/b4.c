#include <stdio.h>

int main()
{
    int a;
    scanf ("%d", &a);
    if((a/100)>=1 && (a/100)<=9)
        printf("YES");
    else
        printf("NO");
    return 0;
}


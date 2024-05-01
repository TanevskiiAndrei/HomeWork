#include <stdio.h>

int main()
{
    int a;
    scanf ("%d", &a);
    if(a<3 || a>11)
    {
        printf("winter");
    }
    if(a<6 && a>2)
    {
        printf("spring");
    }
    if(a<9 && a>5)
    {
        printf("summer");
    }
    if(a<11 && a>8)
    {
        printf("autumn");
    }
    return 0;
}


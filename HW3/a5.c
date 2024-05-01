#include <stdio.h>

int main()
{
    int a,b,c;
    float rez;
    scanf ("%d%d%d", &a, &b, &c);
    rez = ((float)a + b + c)/3;
    printf("%.2f" ,rez);
    return 0;
}


#include <stdio.h>

int main()
{
    int a, b, c, d, f, min, max;
    scanf ("%d%d%d%d%d", &a, &b, &c, &d, &f);
    min = (a<b) ? a : b;
    min = (min<c) ? min : c;
    min = (min<d) ? min : d;
    min = (min<f) ? min : f;
    max = (a>b) ? a : b;
    max = (max>c) ? max : c;
    max = (max>d) ? max : d;
    max = (max>f) ? max : f;
    printf("%d", min + max);
    return 0;
}


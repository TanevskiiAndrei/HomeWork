#include <stdio.h>

int main()
{
    int a;
    scanf ("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int square = i*i;
        int cube = i*i*i;
        printf("%d %d %d\n", i, square, cube);
    }
    return 0;
}


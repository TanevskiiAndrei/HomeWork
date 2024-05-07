#include <stdio.h>

void NumberLine(int A, int B)
{
    if (A == B)
    {
        printf("%d ", A);
        return;
    }
    printf("%d ", A);
    if(A < B)
    {

        NumberLine(A + 1,B);
    }
    if(A > B)
    {

        NumberLine(--A, B);
    }
}

int main()
{
    int A, B;
    scanf("%d%d", &A, &B);
    NumberLine(A, B);
    return 0;
}

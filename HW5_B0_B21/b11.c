#include <stdio.h>

int main()
{
    int number, revers = 0;
    scanf ("%d", &number);
    while(number != 0)
    {
        int residue = number % 10;
        revers = revers *10 + residue;
        number /= 10;
    }
    printf("%d\n", revers);
    return 0;
}


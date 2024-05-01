#include <stdio.h>

int main()
{
    int number, current_number, max, min;
    scanf("%d", &number);
    while (number > 0)
    {
        current_number = number % 10;
        number /= 10;
        if (current_number > max)
        {
            max = current_number;
        }
        if (current_number < min)
        {
            min = current_number;
        }
    }
    printf("%d %d", min, max);
    return 0;
}


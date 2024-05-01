#include <stdio.h>

int main() {
    int number, current_number, countEven = 0, countNotEven = 0;
    scanf("%d", &number);
    while (number > 0)
    {
        current_number = number % 10;
        number /= 10;

        if (current_number % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countNotEven++;
        }
    }
    printf("%d %d", countEven, countNotEven);
    return 0;
}


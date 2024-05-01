#include <stdio.h>

int main() {
    int number, prev_digit, current_digit;
    scanf("%d", &number);

    prev_digit = number % 10;
    number /= 10;

    while (number > 0)
    {
        current_digit = number % 10;
        number /= 10;

        if (current_digit >= prev_digit)
        {
            printf("NO\n");
            return 0;
        }

        prev_digit = current_digit;
    }

    printf("YES\n");
    return 0;
}


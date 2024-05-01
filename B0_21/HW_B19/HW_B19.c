#include <stdio.h>

int main() {
    int number, current_number, sum = 0;
    scanf("%d", &number);
    while (number > 0)
    {
        current_number = number % 10;
        number /= 10;
        sum +=current_number;
    }
    if (sum == 10)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;

}



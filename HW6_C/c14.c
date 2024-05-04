#include <stdio.h>

void Factorial(int number)
{
    int sum = 0, current_number;
    while (number > 0)
    {
        current_number = number % 10;
        number /= 10;
        sum +=current_number;
    }
    if(sum % 2 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
int main()
{
    int number;
    scanf("%d", &number);
    Factorial(number);
    return 0;
}



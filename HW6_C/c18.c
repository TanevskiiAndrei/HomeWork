#include <stdio.h>

int is_digit(char c) {

    if (c >= '0' && c <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
    char c;
    int count = 0;

    do {
        scanf("%c", &c);
        if(is_digit(c))
        {
            count++;
        }
    } while (c != '\n');

    printf("%d", count);

    return 0;
}

#include <stdio.h>

char UpperChar(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    } else {
        return c;
    }
}

int main() {
    char c;

    do {
        scanf("%c", &c);
        if (c != '.') {
            printf("%c", UpperChar(c));
        }
    } while (c != '\n');

    return 0;
}

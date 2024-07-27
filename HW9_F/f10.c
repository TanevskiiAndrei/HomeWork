#include <stdio.h>
#include <string.h>

void compress_string(const char* str) {
    int len = strlen(str);
    if (len == 0) {
        return;
    }

    int count = 1;
    for (int i = 1; i < len; i++) {
        if (str[i] == '.') {
            if (count > 1) {
                printf("%c%d", str[i - 1], count);
            } else {
                printf("%c1", str[i - 1]); // Выводим 1 для последнего одиночного символа
            }
            break;
        }
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            if (count > 1) {
                printf("%c%d", str[i - 1], count);
            } else {
                printf("%c1", str[i - 1]); // Выводим 1 для одиночных символов
            }
            count = 1;
        }
    }
}

int main() {
    char str[1000];

    printf("Введите строку: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Ошибка при считывании строки.\n");
        return 1;
    }

    // Удаляем символ новой строки, если он есть
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    compress_string(str);

    return 0;
}

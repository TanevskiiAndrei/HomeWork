#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char input[10000];

    // Ввод строки
    fgets(input, sizeof(input), stdin);

    // Разделение строки на числа
    int numbers[1000];
    int count = 0;
    char *token = strtok(input, " ");

    while (token != NULL) {
        numbers[count++] = atoi(token);
        token = strtok(NULL, " ");
    }

    // Находим M и N
    int M = numbers[0];
    int N = numbers[0];

    for (int i = 0; i < count - 1; i++) {
        if (numbers[i] < M) M = numbers[i];
        if (numbers[i] > N) N = numbers[i];
    }

    // Создание булевского массива для отслеживания присутствия чисел
    bool present[N - M + 1];
    for (int i = 0; i < N - M + 1; i++) {
        present[i] = false;
    }

    // Обработка чисел, исключая последнее (0)
    for (int i = 0; i < count - 1; i++) {
        if (numbers[i] >= M && numbers[i] <= N) {
            present[numbers[i] - M] = true;
        }
    }

    // Поиск пропущенного числа
    for (int i = 0; i < N - M + 1; i++) {
        if (!present[i]) {
            printf("%d\n", M + i);
            break;
        }
    }

    return 0;
}

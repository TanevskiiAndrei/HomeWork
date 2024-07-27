#include <stdio.h>
#include <stdlib.h>

// Функция для нахождения суммы элементов массива, которые находятся между значениями from и to (исключая границы)
int sum_between_ab(int from, int to, int size, int a[])
{
    int sum = 0;

    // Убедитесь, что границы корректны
    if (from > to) {
        return sum; // Если from больше, чем to, интервал пустой, возвращаем 0
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] >= from && a[i] <= to)
        {
            sum += a[i];
        }
    }
    return sum;
}

//~ int main() {
    //~ char str[1000];

    //~ if (fgets(str, sizeof(str), stdin) == NULL) {
        //~ printf("Ошибка при считывании строки.\n");
        //~ return 1;
    //~ }

    //~ // Удаляем символ новой строки, если он есть
    //~ size_t len = strlen(str);
    //~ if (len > 0 && str[len - 1] == '\n') {
        //~ str[len - 1] = '\0';
    //~ }

    //~ compress_string(str);

    //~ return 0;
//}


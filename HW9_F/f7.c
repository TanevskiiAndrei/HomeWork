#include <stdio.h>
#include <stdlib.h>

int compression(int a[], int b[], int N)
{
    if (N <= 0) {
        return 0; // Если размер массива не положительный, возвращаем 0
    }

    int current_value = a[0]; // Начальное значение первой серии
    int count = 0; // Счетчик для подсчета длины серий
    int index = 0; // Индекс для массива b

    for (int i = 0; i < N; i++)
    {
        if (a[i] == current_value)
        {
            count++;
        }
        else
        {
            b[index++] = count; // Сохраняем длину предыдущей серии
            current_value = a[i]; // Обновляем текущее значение
            count = 1; // Начинаем считать новую серию
        }
    }

    b[index++] = count; // Сохраняем длину последней серии

    return index; // Возвращаем количество элементов в преобразованном массиве b
}

int main()
{
    int N;
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int a[N];
    int b[N]; // Размер массива b должен быть достаточным для хранения всех серий

    printf("Enter the elements: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    int size_b = compression(a, b, N);

    printf("Compressed array: ");
    for (int i = 0; i < size_b; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}

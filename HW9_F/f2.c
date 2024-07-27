#include <stdio.h>

int Input(int arr[], int n)
{
    int i = 0, num;
    while (i < n && scanf("%d", &num) == 1)
    {
        arr[i++] = num;
    }
    return i;
}

// Функция для сортировки массива: все четные в начало, все нечетные в конец
void sort_even_odd(int n, int a[])
{
    int result[n];
    int even_index = 0;
    int odd_index = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            result[even_index++] = a[i];
        }
        else
        {
            result[odd_index--] = a[i];
        }
    }

    for (int i = 0; i < even_index; i++)
    {
        a[i] = result[i];
    }

    for (int i = n - 1; i > odd_index; i--)
    {
        a[even_index++] = result[i];
    }
}

int main() {
    int n;

    // Запрашиваем размер массива
    scanf("%d", &n);

    int arr[n];

    // Ввод массива через консоль
    int actual_size = Input(arr, n);

    for (int i = 0; i < actual_size; i++)
     {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Сортировка массива: четные в начало, нечетные в конец
    sort_even_odd(actual_size, arr);

    for (int i = 0; i < actual_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

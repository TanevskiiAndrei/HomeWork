#include <stdio.h>
#include <stdlib.h>

void change_max_min(int size, int a[])
{
    if (size <= 0)
    {
        return; // Неверный размер массива
    }

    int max_index = 0;
    int min_index = 0;

    // Ищем индексы максимального и минимального элементов
    for (int i = 1; i < size; i++) {
        if (a[i] > a[max_index]) {
            max_index = i;
        }
        if (a[i] < a[min_index]) {
            min_index = i;
        }
    }

    // Если максимальный и минимальный элементы находятся на разных позициях, меняем их местами
    if (max_index != min_index) {
        int temp = a[max_index];
        a[max_index] = a[min_index];
        a[min_index] = temp;
    }
}

//~ int main() {
    //~ int size;

    //~ // Считываем размер массива
    //~ printf("Введите количество элементов массива: ");
    //~ if (scanf("%d", &size) != 1 || size <= 0) {
        //~ printf("Ошибка ввода размера массива.\n");
        //~ return 1;
    //~ }

    //~ int *array = (int *)malloc(size * sizeof(int));
    //~ if (array == NULL) {
        //~ printf("Ошибка выделения памяти.\n");
        //~ return 1;
    //~ }

    //~ // Считываем элементы массива
    //~ printf("Введите %d элементов массива:\n", size);
    //~ for (int i = 0; i < size; i++) {
        //~ if (scanf("%d", &array[i]) != 1) {
            //~ printf("Ошибка ввода элемента массива.\n");
            //~ free(array);
            //~ return 1;
        //~ }
    //~ }

    //~ // Выводим исходный массив
    //~ printf("Исходный массив:\n");
    //~ for (int i = 0; i < size; i++) {
        //~ printf("%d ", array[i]);
    //~ }
    //~ printf("\n");

    //~ // Меняем местами максимальный и минимальный элементы
    //~ change_max_min(size, array);

    //~ // Выводим массив после изменения
    //~ printf("Массив после замены максимального и минимального элементов:\n");
    //~ for (int i = 0; i < size; i++) {
        //~ printf("%d ", array[i]);
    //~ }
    //~ printf("\n");

    //~ // Освобождаем память
    //~ free(array);

    //~ return 0;


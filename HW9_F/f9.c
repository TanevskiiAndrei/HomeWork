#include <stdio.h>
#include <limits.h>

void swap_negmax_last(int size, int a[]) {
    int max_neg_index = -1;  // Инициализация индекса максимального отрицательного элемента
    int max_neg_value = INT_MIN;  // Инициализация значения максимального отрицательного элемента

    // Поиск максимального отрицательного элемента в массиве
    for (int i = 0; i < size; i++) {
        if (a[i] < 0 && a[i] > max_neg_value) {
            max_neg_value = a[i];
            max_neg_index = i;
        }
    }

    // Если найден максимальный отрицательный элемент, меняем его местами с последним элементом массива
    if (max_neg_index != -1) {
        int temp = a[max_neg_index];
        a[max_neg_index] = a[size - 1];
        a[size - 1] = temp;
    }
}

//~ // Пример использования
//~ int main() {
    //~ int array[] = {1, -2 ,-3 ,-4, 5 ,6 ,7, 8, 9 ,10};
    //~ int size = sizeof(array) / sizeof(array[0]);

    //~ swap_negmax_last(size, array);

    //~ // Вывод измененного массива
    //~ for (int i = 0; i < size; i++) {
        //~ printf("%d ", array[i]);
    //~ }

    //~ return 0;
}

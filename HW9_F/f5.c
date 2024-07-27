#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find_max_array(int size, int a[])
{
    if (size <= 0) {
        return -1; // Возвращаем -1 если массив пуст или размер некорректный
    }

    int max = a[0];
    for (int i = 1; i < size; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    return max;
}
//~ void process_input(char buffer[], int results[], int *size)
//~ {
    //~ int idx = 0;
    //~ for (int i = 0; buffer[i] != '\0'; i++)
    //~ {
        //~ if (buffer[i] >= '0' && buffer[i] <= '9')
        //~ {
            //~ results[idx++] = buffer[i] - '0';
        //~ }
    //~ }
    //~ *size = idx;
//~ }

//~ int main(void)
//~ {
    //~ enum {BUFFER_SIZE = 5000}; // Увеличим буфер, чтобы вместить всю строку чисел
    //~ char buffer[BUFFER_SIZE];


    //~ fgets(buffer, BUFFER_SIZE, stdin); // Используем fgets для ввода всей строки

    //~ int results[BUFFER_SIZE]; // Массив для хранения всех цифр
    //~ int size = 0;

    //~ process_input(buffer, results, &size);

    //~ int max_value = find_max_array(size, results); // Получаем максимальное значение
    //~ printf("max (%d)\n", max_value); // Выводим максимальное значение

    //~ return 0;
}

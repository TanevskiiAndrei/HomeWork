#include <stdio.h>

void sort_array(int size, int a[])
{
    int i, swapped;
    for (i = 0; i < size-1; i++)
    {
        swapped = 0; // инициализируем swapped в начале каждого прохода
        for (int j = 0; j < size - i - 1; j++) // изменено условие для оптимизации
        {
            if (a[j] > a[j+1])
            {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}

//~ void Input(int size, int arr[])
//~ {
    //~ for (int i = 0; i < size; i++)
    //~ {
        //~ scanf("%d", &arr[i]);
    //~ }
//~ }

//~ void PrintArray(int size, int arr[])
//~ {
    //~ for (int i=0; i < size; i++)
    //~ {
        //~ printf("%d ", arr[i]);
    //~ }
    //~ printf("\n");
//~ }

//~ int main()
//~ {
    //~ int size;
    //~ scanf("%d", &size); // пользователь вводит размер массива

    //~ int arr[size]; // создаем массив нужного размера

    //~ printf("Enter the elements of the array:\n");
    //~ Input(size, arr); // ввод элементов массива
    //~ sort_array(size, arr); // сортировка массива
    //~ PrintArray(size, arr); // вывод отсортированного массива

    //~ return 0;
}

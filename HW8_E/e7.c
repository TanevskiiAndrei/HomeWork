#include <stdio.h>

void Input(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void ReverseHalf(int size, int arr[])
{
    for (int i = 0; i < size / 4; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size / 2 - i - 1];
        arr[size / 2 - i - 1] = temp;
    }
    for (int i = size / 2; i < size / 2 + size / 4; i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i + size / 2 - 1];
        arr[size - i + size / 2 - 1] = temp;
    }
}

void PrintArray(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int size = 10;
    int arr[size];

    Input(size, arr);
    ReverseHalf(size, arr);
    PrintArray(size, arr);

    return 0;
}

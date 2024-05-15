#include <stdio.h>

int Input(int size, int arr[])
{
    int i;
    for ( i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    return i;
}

void PushR(int size, int arr[])
{
    int PushCount = 4;
    for (int j = 0; j < PushCount; j++)
    {
        int last_element = arr[size - 1];
        for (int i = size - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = last_element;
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
    int size = 12;
    int arr[size];
    Input(size, arr);
    PushR(size, arr);
    PrintArray(size, arr);
    return 0;
}

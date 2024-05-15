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


void PrintArray(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        int temp = arr[i]/10;
        if (temp%10 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}


int main()
{
    int size = 10;
    int arr[size];
    Input(size, arr);
    PrintArray(size, arr);
    return 0;
}

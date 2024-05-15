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

int Min(int size, int arr[])
{
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}


int main()
{
    int size = 5;
    int arr[size];
    Input(size, arr);
    printf( "%d", Min(size, arr));
    return 0;
}

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

int Sum(int size, int arr[])
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}


int main()
{
    int size = 10;
    int arr[size];
    Input(size, arr);
    printf( "%d ",Sum(size, arr));
    return 0;
}

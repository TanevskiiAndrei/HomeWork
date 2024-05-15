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

int Max(int size, int arr[])
{
    int max1 = arr[0];
    int max2 = arr[1];
    int Max1Pos = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > max1)
        {
            max1 = arr[i];
            Max1Pos = i;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > max2 && Max1Pos != i )
        {
            max2 = arr[i];
        }
    }
    sum = max1 + max2;
    return sum;
}


int main()
{
    int size = 10;
    int arr[size];
    Input(size, arr);
    printf( "%d ",Max(size, arr));
    return 0;
}

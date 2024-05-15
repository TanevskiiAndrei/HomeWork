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
int MinPos(int size, int arr[])
{
    int min = arr[0];
    int MinPos = 1;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            MinPos = i+1;
        }
    }
    return MinPos;

}
int Max(int size, int arr[])
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {

        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int MaxPos(int size, int arr[])
{
    int max = arr[0];
    int MaxPos = 1;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            MaxPos = i+1;
        }
    }
    return MaxPos;
}

int main()
{
    int size = 10;
    int arr[size];
    Input(size, arr);
    Min(size, arr);
    printf( "%d %d %d %d",MaxPos(size, arr),Max(size, arr), MinPos(size, arr), Min(size, arr));
return 0;
}

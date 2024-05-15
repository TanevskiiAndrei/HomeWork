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

float Summa(int size, int arr[])
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}


int main()
{
    int size = 5;
    int arr[size];
    Input(size, arr);
    float sum = Summa(size, arr);
    printf( "%.3f", sum/size);
    return 0;
}

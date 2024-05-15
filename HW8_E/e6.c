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

float Sum(int size, int arr[])
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
    int size = 12;
    int arr[size];
    Input(size, arr);
    printf("%.2f",Sum(size, arr)/size);
    return 0;
}

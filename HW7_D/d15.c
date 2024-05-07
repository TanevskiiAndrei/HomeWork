#include <stdio.h>

int max_find(int max)
{
    int num;
    scanf("%d", &num);

    if (num != 0)
    {
        if (num > max)
        {
            max = num;
        }
        return max_find(max);

    } else
    {
        return max;
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    int max = max_find(num);
    printf("%d\n", max);
    return 0;
}

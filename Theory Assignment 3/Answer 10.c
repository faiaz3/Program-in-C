#include <stdio.h>
#include <string.h>

int seven_digit(int *array, int n);
int main()
{
    int N;
    scanf("%d", &N);

    int i, array[N];

    for (i = 1; i <= N; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 1; i <= N; i++)
    {
        printf("%d ", array[i]);
    }

    int *ptr = array;
    seven_digit(ptr, N);

    if (seven_digit)
        printf("Beautiful\n");
    else
        printf("Ugly\n");

    return 0;
}

int seven_digit(int *array, int n)
{
    int i, count=0;
    for (i = 1; i <= n; i++)
    {
        while (array[i] > 0)
        {
            if (array[i] % 10 == 7)
            {
                count++;
            }
            array[i] = array[i] / 10;
        }
    }

    int half;
    if (n % 2 == 0)
    {
        half = n / 2;
    }
    else
    {
        half = n + 1 / 2;
    }

    if (count >= half)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
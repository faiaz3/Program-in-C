#include <stdio.h>

int prime_count(int array[], int n)
{
    int i, j, flag = 0, count;

    for (i = 0; i < n; i++)
    {
        flag = 0;
        if (array[i] < 2)
        {
            flag++;
        }
        else
        {
            for (j = 2; j <= array[i] / 2; j++)
            {

                if (array[i] % j == 0)
                {
                    flag++;
                }
            }
                if (flag == 0)
                {
                    count++;
                    printf("%d---->%d\n", i, array[i]);
                }
        }
    }

    return count;
}

float average(int array[], int n)
{
    int i, sum = 0;
    float avg;

    for (i = 0; i < n; i++)
    {
        sum += array[i];
    }

    avg = sum / n;

    return avg;
}

int main()
{
    int n, i;
    scanf("%d", &n);

    int array[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Prime numbers: %d\n", prime_count(array, n));
    printf("Average of all even integers: %.2f\n", average(array, n));

    return 0;
}
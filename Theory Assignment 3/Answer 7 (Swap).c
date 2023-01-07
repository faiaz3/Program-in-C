#include <stdio.h>
int *m, *n;

void swap(int array[], int N)
{
    int Q, l, r;
    scanf("%d", &Q);

    int i, j, temp;
    for (i = 0; i < Q; i++)
    {
        scanf("%d %d", &l, &r);

        m = &array[l];
        n = &array[r];

        for (j = 1; j <= N; j++)
        {
            temp = *m;
            *m = *n;
            *n = temp;
        }
    }

    for (i = 1; i <= N; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    int array[N];
    int i;
    for (i = 1; i <= N; i++)
    {
        scanf("%d", &array[i]);
    }

    swap(array, N);

    return 0;
}
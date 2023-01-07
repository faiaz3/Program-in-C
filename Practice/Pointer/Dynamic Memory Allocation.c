#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i;
    scanf("%d", &N);
    int *ptr;
    ptr = (int *)malloc(N * sizeof(int)); // type casting, memory allocation, n*size of integer (4 bits)

    for (i = 0; i < N; i++)
    {
        scanf("%d", (ptr + i));
    }

    for (i = 0; i < N; i++)
    {
        printf("%d th position -> %d\n", i, *(ptr + i));
    }

    free(ptr);

    return 0;
}
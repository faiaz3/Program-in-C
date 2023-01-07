#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    n = 5;
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int)); // type casting, memory allocation, n*size of integer (4 bits)
    printf("%p\n", ptr);

    if (ptr == NULL)
    {
        printf("Memory Allocation Failed\n");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }

        for (i = 0; i < n; i++)
        {
            printf("%d th position -> %d\n", i, *(ptr + i));
        }
    }

    n = 10;
    ptr = realloc(ptr, (n + 5) * sizeof(int));
    printf("%p\n", ptr);

    if (ptr == NULL)
    {
        printf("Memory Allocation Failed\n");
    }
    else
    {
        for (i = 5; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }

        for (i = 0; i < n; i++)
        {
            printf("%d th position -> %d\n", i, *(ptr + i));
        }
    }

    free(ptr);

    return 0;
}
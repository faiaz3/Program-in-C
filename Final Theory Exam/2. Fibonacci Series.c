#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int n1 = 0, n2 = 1;

    int next = n1 + n2;

    printf("%d, %d, ", n1, n2);

    for (int i = 3; i <= n; i++)
    {
        printf("%d, ", next);
        n1 = n2;
        n2 = next;
        next = n1 + n2;

        if(i==n-1)
        {
            printf("%d", next);
            break;
        }
    }

    return 0;
}
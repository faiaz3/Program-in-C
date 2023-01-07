#include <stdio.h>

int divisible5(int n)
{
    if (n % 5 == 0)
        return 1;
    return -1;
}

int divisible3(int n)
{
    if (n % 3 == 0)
        return 1;
    return -1;
}

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int ara[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int divides3 = divisible3(ara[i]);
        int divides5 = divisible5(ara[i]);
        
        if (divides3 == 1 || divides5 == 1)
        {
            count++;
        }
    }

    if (count > 0)
    {
        printf("%d\n", count);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}

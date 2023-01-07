#include <stdio.h>

int solve(int i, int n)
{
    if (i > n)
        return 0;
    else
        int s = solve(i + 1, n);
        return s;
}
int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", solve(1, n));

    return 0;
}
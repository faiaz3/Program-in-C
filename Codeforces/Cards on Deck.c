#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int total = A + B + C;

    if (A < B && A < C)
        printf("%d", total - A);
    else if (B < A && B < C)
        printf("%d", total - B);
    else
        printf("%d", total - C);

    return 0;
}
#include <stdio.h>

int main()
{
    int a = 7;
    double b = 8.65;
    int *pi;
    double *pd;

    pi = &a;
    pd = (double *)pi; // type casting

    printf("Values = %d %lf\n", a, b);
    printf("Addresses = %p %p\n", pi, pd);

    return 0;
}
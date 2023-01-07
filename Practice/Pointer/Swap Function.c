//Pass by Value and Pass by Reference

void swap(int* x, int* y)
{
    int temp= *x;
    *x= *y;
    *y= temp;
}

#include<stdio.h>

int main()
{
    int a=5, b=7;
    printf("a= %d, b= %d\n", a, b);

    swap(&a, &b);
    printf("a= %d, b= %d\n", a, b);

    return 0;
}
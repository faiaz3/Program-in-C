#include<stdio.h>

int main()
{
    int a= 5;
    printf("initial value of a: %d\n", a);

    int* p= &a;
    printf("initial value of p: %p (address of variable a)\n", p);

    int** q= &p; //pointer to pointer
    printf("initial value of q: %p (address of pointer p)\n", q);

    **q = 7;
    printf("updated value of variable a: %d\n", a);

    return 0;
}
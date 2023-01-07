#include<stdio.h>

int main()
{
    int a=12345;
    int* p;

    p= &a; //pointer is the address of an variable
    int* q = p;

    printf("%p\n", p);  //print address
    printf("%d\n", *p); //print value of the address

    //name of an array is a pointer

    *p = 7;
    printf("a = %d\n", a);
    printf("q = %d\n", q);

    return 0;
}
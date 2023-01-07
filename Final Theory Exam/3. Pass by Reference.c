#include <stdio.h>

int newvalue (int *n) //here the parameter is being passed a memory address
{
    return *n + 5;
}

int main()
{
    int a = 5;
    int new = newvalue(&a); //memory location of a

    printf("New Value: %d\n", new);

    return 0;
}
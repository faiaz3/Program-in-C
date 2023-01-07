#include <stdio.h>

int newvalue (int n) //here the parameter is being passed a value of the variable
{
    return n + 5;
}

int main()
{
    int a = 5;
    int new = newvalue(a);

    printf("New Value: %d\n", new);

    return 0;
}
#include<stdio.h>

int main()
{
    int marks;
    printf("Input your mark: ");
    scanf("%d", &marks);

    if (0<=marks && marks<=32)
    {
        printf("F");
    }
    else if (33<=marks && marks<=39)
    {
        printf("D");
    }
    else if (40<=marks && marks<=49)
    {
        printf("C");
    }
    else if (55<=marks && marks<=59)
    {
        printf("B");
    }
    else if (60<=marks && marks<=69)
    {
        printf("A-");
    }
    else if (70<=marks && marks<=79)
    {
        printf("A");
    }
    else if (80<=marks && marks<=100)
    {
        printf("A+");
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}

#include<stdio.h>

int main()
{   //Problem 1

    printf("Hi there /\."
           "\tI hope you are doing great and practicing well."
           "\nNow this is a simple task you need to do."
           "\tJust care for indentation."
           "\nShow 100%% of sincerity.");

    //Problem 2

    int a=10,b=20;

    printf("\n\n%d %d", b,a);

    //Problem 3

    int c;
    printf("\nEnter number: ");
    scanf ("%d", &c);

    printf("\n double of the number is: %d",2*c);

    //Problem 4
    int i,j;

    printf("\nEnter Both Numbers:\n");
    scanf("%d %d", &i, &j);

    printf("\nSummation: %d \nSubtraction: %d \nMultiplication: %d \nDivision:%d", i+j,i-j,i*j,i/j);

    //Problem 5

    char s;

    printf("\nEnter a character:");
    scanf ("%c",&s);
    printf("\n The ASCII value is : %d", s);
}

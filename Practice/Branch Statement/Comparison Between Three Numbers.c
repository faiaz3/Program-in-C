#include<stdio.h>

int main()
{
    int x,y,z;
    printf("Enter Three Integers:\n");
    scanf("%d %d %d", &x,&y,&z);

    if (x==y && y==z)
    {
        printf("They are equal\n");
    }

    else
    {
        if (x==y && x>z)
        {
            printf("%d and %d are both large",x,y);
        }
        else if (x==z && x>y)
        {
            printf("%d and %d are both large",x,z);
        }
        else if (y==z && y>z)
        {
            printf("%d and %d are both large",y,z);
        }
        else if (x>y && x>z)
        {
            printf("%d is The Largest Number.\n", x);
        }
        else if (y>x && y>z)
        {
        printf("%d is the largest number.\n",y);
        }
        else
        {
        printf("%d is the largest number.\n",z);
        }
    }

    return 0;
}

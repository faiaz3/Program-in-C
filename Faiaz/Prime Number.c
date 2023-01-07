#include<stdio.h>

int main()
{
    int n;
    int count=0; //number of times
    printf("Enter a Number:");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("Invalid Number!");
    }
    else if (n<2)
    {
        printf("Non-Prime");
    }
    else {

    for (int i=2; i<n/2; i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
        if(count==0) {
            printf("Prime");
        }
        else {
            printf("Composite");
        }
    }

    return 0;
}


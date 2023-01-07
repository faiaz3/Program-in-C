#include<stdio.h>

int main()
{
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    printf("The factors of 12 are: ");

    for (int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            if(i==n)
            {
                printf("%d",i);
            }
            else
                printf("%d, ", i);
        }
    }

    return 0;
}

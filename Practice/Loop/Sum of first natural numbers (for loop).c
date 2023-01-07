#include<stdio.h>

int main()
{
    int n,s=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("The first %d natural number is :\n",n);

    for (int i=1; i<=n; i++)
    {
        printf("%d ",i);
        s=s+i;
    }
    printf("\nThe Sum of Natural Number upto 7 terms : %d\n",s);

    return 0;
}

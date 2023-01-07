#include<stdio.h>

int main()
{
    int n,i=1,s=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    printf("The first %d natural number is :\n",n);

    while (i<=n)
    {
        printf("%d ",i);
        s=s+i;
        i++;
    }
    printf("\nThe Sum of Natural Number upto 7 terms : %d\n",s);

    return 0;
}

#include<stdio.h>

int main()
{
    int i,n,m;
    printf("Input number of terms : ");
    scanf("%d",&n);

    for (i=1; i<=n; i++)
    {
        m=i*i;
        printf("Number is : %d and Square of the %d is :%d\n",i,i,m);
    }

    return 0;
}

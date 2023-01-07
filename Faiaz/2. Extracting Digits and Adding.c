#include<stdio.h>

int main()
{
    long long int n;
    int sum=0;

    printf("Enter Number:");
    scanf("%lld",&n);

    for(int i=0;n!=0;i++)
    {
        sum=sum+(n%10);
        n/=10; //number is divided by 10 to extract digits
    }

    printf("sum= %d\n",sum);

    return 0;
}

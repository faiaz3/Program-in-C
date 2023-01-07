#include<stdio.h>

int main()
{
    int a,b,mod,mul;
    int gcd,lcm;
    scanf("%d %d",&a,&b);
    mul=a*b;
    printf("The LCM of %d and %d is ",a,b);

    while(b!=0)
    {
        mod=a%b;
        a=b;
        b=mod;
    }
    gcd=a;
    lcm=mul/gcd;
    printf("%d", lcm);

    return 0;
}

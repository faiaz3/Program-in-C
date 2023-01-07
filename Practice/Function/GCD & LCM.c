#include<stdio.h>

int my_gcd(int x, int y)
{
    int i;
    for(i=x; i>=1; i--)
    {
        if(x%i==0 && y%i==0)
            return i;
    }
}

int main()
{
    int a,b;
    printf("ENTER TWO NUMBERS: ");
    scanf("%d %d", &a, &b);

    int GCD= my_gcd(a,b);
    int LCM= a*b/my_gcd(a,b);

    printf("GCD = %d\n", GCD);
    printf("LCM = %d\n", LCM);
    return 0;
}

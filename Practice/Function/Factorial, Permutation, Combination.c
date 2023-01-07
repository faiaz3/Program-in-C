#include<stdio.h>
#include<math.h>

int factorial(int x);

int main()
{
    int n,r;
    printf("Enter values of n and r:\n");
    scanf("%d %d", &n, &r);

    int permutation = factorial(n)/factorial(n-r);
    int combination = factorial(n)/(factorial(n-r)*factorial(r));

    printf("Factorial = %d\n",factorial(n));
    printf("nPr = %d\n", permutation);
    printf("nCr = %d\n", combination);
    return 0;
}

int factorial(int x)
{
    int result=1,i;
    for(i=1; i<=x; i++)
    {
        result *=i;
    }
    return result;
}

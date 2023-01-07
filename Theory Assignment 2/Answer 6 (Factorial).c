//C Program to find factorials of two numbers and their ratio

#include<stdio.h>
#include<math.h>

int factorial(int x);
int ratio(int x, int y);

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    printf("%d\n", factorial(n1));
    printf("%d\n", factorial(n2));
    printf("%d\n", ratio(n1,n2));

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

int ratio(int x, int y)
{
    int a,b;
    a = factorial(x);
    b = factorial(y);
    
    if(a>b)
        return a/b;
    else
        return b/a;
}
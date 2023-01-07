#include<stdio.h>

int solve(int ar[], int i, int n)
{
    if(i==n) return 0;
    int s= solve(ar, i+1, n);
    return s+ar[i];
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n], i;

    for(i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
    }

    printf ("%d", solve(ar,0,n));

    return 0;
}
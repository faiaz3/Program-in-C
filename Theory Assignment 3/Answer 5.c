#include<stdio.h>

int even_odd(int array[], int n)
{
    int i;
    int sum1=0;
    int sum2=0;

    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            if(array[i]%2==0)
                sum1+=array[i]+i;
        }
        if(i%2==1)
        {
            if(array[i]%2==1)
                 sum2+=array[i]+i;
        }
        printf("%d --> %d,%d\n",i,sum1,sum2);
    }

    if(sum1!=0 || sum2!=0)
        return sum1+sum2;
    else
        return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &array[i]);
    }

    int sum= even_odd(array,n);
    printf("%d\n", sum);

    return 0;
}

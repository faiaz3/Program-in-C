#include<stdio.h>

int main()
{
    int n,i,k;
    scanf("%d %d", &n, &k);

    int array[n];
    int mid=n/2;

    array[0]=2;
    for(i=1; i<=mid; i++)
    {
        array[i]=array[i-1]+2; //putting even numbers from start to halfway
    }

    array[mid]=1;
    for(i=mid+1; i<=n; i++)
    {
        array[i]=array[i-1]+2; //putting odd numbers from halfway to the end
    }

    for(i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nThe %dth element in this sequence is %d", k, array[k-1]); 

    return 0;
}

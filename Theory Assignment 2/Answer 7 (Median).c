#include<stdio.h>

double median(int array[], int n)
{
    int i,j,temp;

    //sorting array using bubble sort

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(array[i]>array[j])
            {
                temp= array[i];
                array[i]= array[j];
                array[j]= temp;
            }
        }
        printf("%d ", array[i]);
    }

    //check and find median

    if(n%2!=0)
    {
        double x = array[((n+1)/2)-1];
        return x;
    }
    else
    {
        double a= array[(n/2)-1];
        double b= array[(n/2)];
        double y= (a+b)/2;

        return y;
    }
}
int main()
{
    int n,i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int array[n];
    printf("\nEnter elements: ");

    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("MEDIAN: %.2lf\n", median(array,n));

    return 0;
}

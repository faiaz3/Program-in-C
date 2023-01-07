#include<stdio.h>

int main()
{
    int n,i,j;
    int p,v,t;

    scanf("%d",&n);
    int solved= 0; //how many solved will be incremented later
    for(i=0; i<n; i++)
    {
        int counter= 0; //counts or sums up the total solution
        for(j=0; j<3; j++)
        {
            scanf("%d", &p);
            counter+=p;
        }
        if(counter>=2)
            solved++;
    }

    printf("%d\n",solved);
    return 0;
}

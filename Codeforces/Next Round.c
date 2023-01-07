#include<stdio.h>

int main()
{
    int n,k,i; //n= number of participants, k= position to be qualified to the next round
    scanf("%d %d", &n,&k);
    int scores[55]; //Max number of contestants score

    for (i=1; i<=n; i++)
    {
        scanf("%d",&scores[i]);
    }
    int qualify =0; //initially 0 because no one qualified yet

    for(i=1; i<=n; i++)
    {
        if(scores[i]>=scores[k] && scores[i]>0)
            qualify++;
    }
    printf("%d\n",qualify);

    return 0;
}

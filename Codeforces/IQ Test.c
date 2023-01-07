#include<stdio.h>

int main()
{
    int array[105];
    int n,i;
    int ec= 0, oc= 0, ans; //even count, odd count,answer variable
    scanf("%d",&n);

    for(i=1; i<=n; i++) //take inputs inh array
    {
        scanf("%d", &array[i]);
    }
    for(i=1; i<=n; i++) { //check how many evens and odds
        if(array[i]%2==0)
            ec++;
        else
            oc++;
    }
    //printf("Evens= %d, Odds= %d", ec,oc);

    if(ec==1) {
        for(i=1; i<=n; i++) //repeatedly checking to extract index of even
        {
            if(array[i]%2==0)
                ans= i;
        }
    }
    else if(oc==1) {
        for(i=1; i<=n; i++) //repeatedly checking to extract index of odd
        {
            if(array[i]%2==1)
                ans= i;
        }
    }
    printf("%d\n",ans);
    return 0;
}

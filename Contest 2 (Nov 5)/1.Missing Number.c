#include<stdio.h>

int main()
{
    int T,S,A,B,C;
    scanf("%d",&T);
    int i,ans;

    for(i=1; i<=T; i++)
    {
        scanf("%d %d %d %d", &S,&A,&B,&C);
        ans= S-(A+B+C);
        printf("%d\n",ans);
    }

    return 0;
}

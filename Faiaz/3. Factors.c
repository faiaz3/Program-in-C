#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d, ",n);

    for(int i=n; i>1;)
    {

        if(i%2==0)
        {
            i/=2;

            if(i==1)
            {
                printf("%d",i);
            }
            else
                printf("%d, ",i);
        }
        else
        {
            i--;
            printf("%d, ",i);
        }

    }
    return 0;
}

#include<stdio.h>

int main()
{
    int T,N;
    int i,j,count;
    scanf("%d",&T);

    for(j=0; j<T; j++){
        scanf("%d", &N);
        count=0;

        if (N<2){
            printf("No\n");
        }
        else{

            for (i=2; i<=N/2; i++)
            {
                if(N%i==0){
                count++;
                break;
            }
        }
            if(count==0){
                printf("Yes\n");
        }
            else{
                printf("No\n");
            }
        }
    }


    return 0;
}

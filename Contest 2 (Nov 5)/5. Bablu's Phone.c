#include<stdio.h>

int main()
{
    int T,X,Time;
    scanf("%d",&T);
    int i;

    for(i=0; i<T; i++)
    {
        scanf("%d%%",&X);

        if(X>=0 && X<=60){
            Time= (60-X)+(20*2)+(20*3);
        }
        else if(X>60 && X<=80){
            Time= (80-X)*2+(20*3);
        }
        else if(X>80 && X<=100){
            Time= (100-X)*3;
        }
        printf("%d minutes \n", Time) ;
    }

    return 0;
}

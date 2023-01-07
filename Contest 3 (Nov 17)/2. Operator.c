#include<stdio.h>
#include<string.h>

int main()

{
    char S[25];
    int sum=0;
    fgets(S,25,stdin);

    int a,b,i;
    scanf("%d %d", &a, &b);

    int length = strlen(S);

    for(i=0; i<length; i++){
        if(S[i]=='*'){
            sum+=(a*b);
        }
        else if(S[i]=='+'){
            sum+=(a+b);
        }
    }
    printf("%d\n", sum);


    return 0;
}

#include<stdio.h>
#include<string.h>

void sort_string(char S[50])
{
    int i,j,temp;

    //bubble sort descending order
    for(i=0; i<strlen(S); i++)
    {
        for(j=i+1; j<strlen(S); j++)
        {
            if(S[i]<S[j])
            {
                temp= S[i];
                S[i]= S[j];
                S[j]= temp;
            }
        }
    }
    printf("%s\n", S);
}

int main()
{
    char S[50];
    scanf("%s", S);

    sort_string(S);

    return 0;
}
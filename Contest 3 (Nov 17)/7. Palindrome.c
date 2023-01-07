//Palindrome
#include<stdio.h>
#include<string.h>

int main()
{
    int T,i,j,length;
    scanf("%d", &T);
    char S[21];

    for(int i=0; i<T; i++)
    {
        scanf("%s", S);
        int flag=0;
        length= strlen(S);

        for(int j=0; j<length/2; j++)
        {
            if (S[j]!=S[length-j-1])
            {
                flag= 1;
                break;
            }
        }
        if(flag==1)
        {
            printf("Case #1: Not Palindrome\n");
        }
        else
        {
            if(length>=7)
            {
                printf("Case #2: %c%d%c\n", S[0],length-2,S[length-1]);
            }
            else
            {
                printf("Case #3: %s\n", S);
            }
        }
    }

    return 0;
}

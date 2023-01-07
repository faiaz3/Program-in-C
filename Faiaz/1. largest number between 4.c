#include<stdio.h>

int main()
{
    int n;
    int lrg,sml;

    for(int i=1; i<=4; i++) //Taking Input 4 times
    {
        printf("Enter number %d (Press Enter):",i);
        scanf("%d", &n);

    if(lrg=n && n>lrg)
        lrg=n;

    if(lrg=n && n<lrg)
        sml=n;
    }

    printf("Largest= %d",lrg);
    printf("\nSmallest= %d",sml);

    return 0;
}

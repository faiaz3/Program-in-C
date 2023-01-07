#include<stdio.h>

int leap(int y)
//Every 400 year comes a leap year
//Every year divisible by 4 is a leap year
//Every century<400 is not a leap year
{
    if( (y%400==0) || (y%4==0 && y%100!=0))
        return 1;
    else
        return 0;
}

int is_distinct(int n)
{
    int ld;
    int count_digit[10]={0,0,0,0,0,0,0,0,0,0}; //10=Base of Decimal Number
    while(n>0)
    {
        ld = n%10;
        count_digit[ld]++;
        n/=10;
    }
    
    int i;
    for(i=0; i<10; i++)
    {
        if(count_digit[i]>1)
            return 0;
    }
    return 1;
}

int main()
{
    int year;
    scanf("%d", &year);

    if(leap(year) && is_distinct(year))
        printf("Beautiful\n");
    else
        printf("UGLY\n");

    return 0;
}
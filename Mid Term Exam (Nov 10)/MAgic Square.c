#include<stdio.h>

int main()
{
    int i,j,flag=0;
    int matrix[3][3];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    int diagonal_sum = 0;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j){
                diagonal_sum+= matrix[i][j];
            }
        }
    }


    for(i=0; i<3; i++)
    {
        int horizontal_sum = 0;
        for(j=0; j<3; j++)
        {
            horizontal_sum += matrix[i][j];
        }
        if(diagonal_sum == horizontal_sum)
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }


    for(i=0; i<3; i++)
    {
        int vertical_sum = 0;
        for(j=0; j<3; j++)
        {
            vertical_sum += matrix[j][i];
        }
        if(diagonal_sum == vertical_sum)
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if (flag == 1)
        printf("\nYES");
    else
        printf("\nNO");

    return 0;
}

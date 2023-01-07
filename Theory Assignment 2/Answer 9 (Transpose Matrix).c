#include<stdio.h>

void transpose(int matrix[3][3]);

int main()
{
    printf("Enter Matrix values: \n");

    int matrix[3][3];
    int i,j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Transposed Matrix:\n");
    transpose(matrix);

    return 0;

}

void transpose(int matrix[3][3])
{
    int i,j;
    int transpose[3][3];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            transpose[j][i]=matrix[i][j];
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
}
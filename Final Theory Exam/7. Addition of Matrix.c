#include <stdio.h>

void addMatrix(int r, int c, int m1[r][c], int m2[r][c])
{
    int i, j, sum[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
            if (j == c - 1)
            {
                printf("\n");
            }
        }
    }
}

int main()
{
    int row, col;
    printf("Enter row and column\n");
    scanf("%d %d", &row, &col);

    int mat1[row][col];

    int i, j;

    printf("Enter 1st Matrix elements: \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    int mat2[row][col];

    printf("Enter 2nd Matrix elements: \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    addMatrix(row, col, mat1, mat2);

    return 0;
}
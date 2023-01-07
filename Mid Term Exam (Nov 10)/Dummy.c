#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter the size of the matrix:");
    scanf("%d %d", &row, &col);
    int a[row][col];
    printf("Enter the elements of matrix \n");
    if(row==col)
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        int sum_of_diagonal = 0;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(i==j)
                {
                    sum_of_diagonal += a[i][j];
                }
            }
        }
        for(int i=0; i<row; i++)
        {
            int sum_of_row = 0;
            for(int j=0; j<col; j++)
            {
                sum_of_row += a[i][j];
            }
            if(sum_of_row != sum_of_diagonal)
            {
                printf("NO\n");
                return 0;
            }
        }
        for(int i=0; i<row; i++)
        {
            int sum_of_column = 0;
            for(int j=0; j<col; j++) {
                sum_of_column += a[j][i];
            }
            if(sum_of_column != sum_of_diagonal)
            {
                printf("NO\n");
                return 0;
            }
        }
        printf("YES\n");
    }
    else
        printf("NO\n");
        return 0;
}

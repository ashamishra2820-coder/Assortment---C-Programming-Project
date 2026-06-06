// Q.4 Sum of Elements in Row & Column of 2D Array

#include <stdio.h>

int main()
{
    int row, col, i, j;
    int a[3][3];
    int row_num, col_num;
    int sum = 0;

    // Input row and column size
    printf("Enter the array's row size: ");
    scanf("%d", &row);

    printf("Enter the array's column size: ");
    scanf("%d", &col);

    // Input array elements
    printf("\nEnter array's elements:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Row sum
    printf("\nEnter row number: ");
    scanf("%d", &row_num);

    printf("Elements of row %d: ", row_num);

    sum = 0;
    for(j = 0; j < col; j++)
    {
        printf("%d ", a[row_num][j]);
        sum += a[row_num][j];
    }

    printf("\nThe sum of a row %d: %d\n", row_num, sum);

    // Column sum
    printf("\nEnter column number: ");
    scanf("%d", &col_num);

    printf("Elements of column %d: ", col_num);

    sum = 0;
    for(i = 0; i < row; i++)
    {
        printf("%d ", a[i][col_num]);
        sum += a[i][col_num];
    }

    printf("\nThe sum of column %d: %d\n", col_num, sum);

    return 0;
}
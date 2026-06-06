//Q3 Transpose of 2D Array:

#include <stdio.h>

int main()
{
    int row, col, i, j;
    int a[3][3];

    // Input row and column size
    printf("Enter the array's row & column size: ");
    scanf("%d %d", &row, &col);

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

    // Display transpose matrix
    printf("\nThe transpose matrix of an array:\n");

    for(i = 0; i < col; i++)
    {
        for(j = 0; j < row; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}
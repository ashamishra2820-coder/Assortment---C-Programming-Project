//Q2 Largest Element in 2D Array:

#include <stdio.h>

int main()
{
    int row, col, i, j;
    int a[3][3];

    printf("Enter the array's row size: ");
    scanf("%d", &row);

    printf("Enter the array's column size: ");
    scanf("%d", &col);

    printf("\nEnter array's elements:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int largest = a[0][0];

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(a[i][j] > largest)
            {
                largest = a[i][j];
            }
        }
    }

    printf("\nThe largest element is: %d\n", largest);

    return 0;
}
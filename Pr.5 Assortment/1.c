//Q1 Negative Elements in 1D Array:

#include <stdio.h>
#define SIZE 5

int main() {
    int arr[SIZE];
    int i;

    // Input elements into the array
   printf("Enter the array's size: %d\n\nEnter array's elements:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Print negative elements
    printf("Negative elements in the array:\n");
    for (i = 0; i < SIZE; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
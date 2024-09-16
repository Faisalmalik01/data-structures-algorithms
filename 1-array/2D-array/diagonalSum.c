#include <stdio.h>

int main() {
    int rows, cols;

    // Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Declare a 2D array with the given size
    int arr[rows][cols];

    // Input elements into the 2D array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // int leftDiagonalSum = 0;
    // for(int i = 0; i < rows; i++) {
    //     leftDiagonalSum += arr[i][i];
    // }


    // printf("sum of Left Diagonal element is %d\n", leftDiagonalSum);

    int rightDiagonalSum = 0;
    for(int i = 0; i < rows; i++) {
        rightDiagonalSum += arr[i][cols - 1 - i];
    }


    printf("sum of right Diagonal element is %d\n", rightDiagonalSum);

    return 0;
}
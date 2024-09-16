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

    // Initialize arrays to store sums of each row and column
    int rowSums[rows];
    int colSums[cols];

    // Initialize all sums to 0
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0;
    }
    for (int j = 0; j < cols; j++) {
        colSums[j] = 0;
    }

    // Calculate the sums
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rowSums[i] += arr[i][j]; // Add to row sum
            colSums[j] += arr[i][j]; // Add to column sum
        }
    }

    // Print the sum of each row
    printf("\nSum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d sum = %d\n", i, rowSums[i]);
    }

    // Print the sum of each column
    printf("\nSum of each column:\n");
    for (int j = 0; j < cols; j++) {
        printf("Column %d sum = %d\n", j, colSums[j]);
    }

    return 0;
}

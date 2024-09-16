#include <stdio.h>

int main() {

    int rows;
    int cols;

    printf("Enter Number of Rows: ");
    scanf("%d", &rows);
    printf("Enter Number of Columns: ");
    scanf("%d", &cols);


    int arr[rows][cols];

    // Input elements into the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the 2D array
    printf("Two Dimensional Array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}

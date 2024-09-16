#include <stdio.h>

int main() {
    int size_1, size_2;


    printf("Enter the size of the first array: ");
    scanf("%d", &size_1);

    int arr_1[size_1];
    // Input elements for the first array
    for (int i = 0; i < size_1; i++) {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &arr_1[i]);
    }

    // Input size for the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &size_2);

    int arr_2[size_2];
    // Input elements for the second array
    for (int i = 0; i < size_2; i++) {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &arr_2[i]);
    }

    // Check if array sizes are the same
    if (size_1 != size_2) {
        printf("Arrays are not equal because their sizes are different.\n");
        return 0;
    }

    // Compare elements of both arrays
    int are_equal = 1; // Assume arrays are equal initially
    for (int i = 0; i < size_1; i++) {
        if (arr_1[i] != arr_2[i]) {
            are_equal = 0; // Set flag to 0 if any elements differ
            break; // Exit the loop as soon as a difference is found
        }
    }

    // Print the result based on the comparison
    if (are_equal) {
        printf("Both arrays are equal.\n");
    } else {
        printf("Both arrays are not equal.\n");
    }

    return 0;
}

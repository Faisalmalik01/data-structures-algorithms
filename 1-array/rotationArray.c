#include <stdio.h>

// Function to check if arr2 is a subarray of arr1
int is_subarray(int arr1[], int size1, int arr2[], int size2) {
    for (int i = 0; i <= size1 - size2; i++) {
        int j;
        for ( j = 0; j < size2; j++) {
            if (arr1[i + j] != arr2[j]) {
                break;
            }
        }
        if (j == size2) {
            return 1; // Found subarray
        }
    }
    return 0; // Not found
}

int main() {
    int size_1, size_2;

    // Input for the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &size_1);

    int arr_1[size_1];
    for (int i = 0; i < size_1; i++) {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &arr_1[i]);
    }

    // Input for the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &size_2);

    int arr_2[size_2];
    for (int i = 0; i < size_2; i++) {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &arr_2[i]);
    }

    // Early exit if sizes are not equal
    if (size_1 != size_2) {
        printf("Array 2 is not a rotated version of Array 1\n");
        return 0;
    }

    // Create a doubled array by concatenating arr_1 with itself
    int doubled_arr[2 * size_1];
    for (int i = 0; i < size_1; i++) {
        doubled_arr[i] = arr_1[i];
        doubled_arr[i + size_1] = arr_1[i];
    }

    // Check if arr_2 is a subarray of doubled_arr
    if (is_subarray(doubled_arr, 2 * size_1, arr_2, size_2)) {
        printf("Array 2 is a rotated version of Array 1\n");
    } else {
        printf("Array 2 is not a rotated version of Array 1\n");
    }

    return 0;
}



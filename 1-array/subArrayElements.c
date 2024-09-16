#include <stdio.h>

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

    // Check if all elements of arr_2 are present in arr_1
    int all_present = 1; // Assume all elements are present initially

    for (int i = 0; i < size_2; i++) {
        int found = 0; // Flag to check if the current element of arr_2 is in arr_1
        for (int j = 0; j < size_1; j++) {
            if (arr_2[i] == arr_1[j]) {
                found = 1; // Found the element in arr_1
                break; // Exit inner loop since the element is found
            }
        }
        if (!found) {
            all_present = 0; // Set to 0 if any element of arr_2 is not found in arr_1
            break; // No need to continue checking further
        }
    }

    // Print the result based on whether all elements are present
    if (all_present) {
        printf("Yes, all elements of array 2 are present in array 1\n");
    } else {
        printf("No, not all elements of array 2 are present in array 1\n");
    }

    return 0;
}

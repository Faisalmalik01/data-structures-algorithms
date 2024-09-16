#include <stdio.h>

int main() {
    int size, i, element, found = 0;
    
    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    // Input elements into the array
    for (i = 0; i < size; i++) {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    // Print original array
    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Input element to delete
    printf("Enter the element to delete: ");
    scanf("%d", &element);
    
    // Find and delete the element
    for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            found = 1;
            // Shift elements to remove the found element
            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j+1];
            }
            size--; // Decrease the size of the array
            i--; // Decrement i to recheck the current position
        }
    }
    
    if (found) {
        // Print the updated array
        printf("Array after deletion: ");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Element %d not found in the array.\n", element);
    }
    
    return 0;
}
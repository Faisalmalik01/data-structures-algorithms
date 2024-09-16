#include <stdio.h>

// Function to search for an element in the array
int searchElement(int arr[], int size, int searchTarget) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == searchTarget) {
            return i; // Return the index if the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

// Function to delete an element from the array
int deleteElement(int arr[], int size, int deleteTarget) {
    int index = searchElement(arr, size, deleteTarget); // Find the element index using searchElement function
    if (index == -1) {
        printf("Element not found in the array.\n");
        return size; // Return the same size as no deletion occurs
    }

    // Shift elements to the left to delete the target element
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    printf("Element deleted successfully.\n");
    return size - 1; // Return new size after deletion
}

int main() {
    int size;
    printf("Enter the size of an Array: ");
    scanf("%d", &size);

    int arr[size];

    // Input elements into the array
    for (int i = 0; i < size; i++) {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    int searchTarget;
    printf("Enter the number to search: ");
    scanf("%d", &searchTarget);

    // Search for the element
    int index = searchElement(arr, size, searchTarget);
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("Element not found\n");
    }

    int deleteTarget;
    printf("Enter the number to delete: ");
    scanf("%d", &deleteTarget);

    // Delete the element
    size = deleteElement(arr, size, deleteTarget);

    // Print the updated array
    printf("Updated array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

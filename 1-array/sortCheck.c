#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++) {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    
    int descending = 1; 
    int ascending = 1; 

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) { // Compare current element with the previous one
            ascending = 0; // Not ascending if the current element is smaller
        }
        if (arr[i] > arr[i - 1]) { // Compare current element with the previous one
            descending = 0; // Not descending if the current element is larger
        }
    }

    
    if (descending) {
        printf("The array is sorted in descending order.\n");
    } else if (ascending) {
        printf("The array is sorted in ascending order.\n");
    } else {
        printf("The array is not sorted.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int arr[5], size = 5;

    // Input elements into the array
    for (int i = 0; i < size; i++) {
        printf("Enter value for element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Print the reversed array
    printf("Reversed array is:\n");
    for (int i = size - 1; i >= 0; i--) {  // start from the last element and go backwards to the first element of the array 
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

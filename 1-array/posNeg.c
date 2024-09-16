#include <stdio.h>

int main() {
    int arr[20], posArr[20], negArr[20];
    int size = 20; // Define the array size
    int pos = 0, neg = 0;

    // Input elements into the array
    for (int i = 0; i < size; i++) {
        printf("Enter value for element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Separate positive and negative numbers
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            posArr[pos] = arr[i];
            pos++;
        } else {
            negArr[neg] = arr[i];
            neg++;
        }
    }

    // Print positive numbers
    printf("Positive array: ");
    for (int i = 0; i < pos; i++) {
        printf("%d ", posArr[i]);
    }
    printf("\n");

    // Print negative numbers
    printf("Negative array: ");
    for (int i = 0; i < neg; i++) {
        printf("%d ", negArr[i]);
    }
    printf("\n");

    return 0;
}

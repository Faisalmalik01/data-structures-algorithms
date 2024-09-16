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


    // Check if arr_2 is a subarray of arr1
    for(int i = 0; i < size_1; i++) {
        if (arr_1[i] == arr_2[0]) {
            int j;
            for (j = 0; j < size_2; j++) {
                if (arr_1[i + j] != arr_2[j]) {
                    break;
                }
            }
            if (j == size_2) {
                printf("Array 2 is a subarray of Array 1\n");
                return 0;
            }
        }
    }


    return 0;
}
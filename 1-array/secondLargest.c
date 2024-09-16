

#include <stdio.h>

int main() {
    int size;
    
    printf("Enter the size of an array: ");
    scanf("%d", &size);
   
    if (size < 2) {
        printf("Array must have at least 2 elements.\n");
        return 1; 
    }

    int arr[size];


    for (int i = 0; i < size; i++) {
        printf("Enter the value for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    int max, second_max;

    // Initialize max and second_max with the first two elements correctly
    if (arr[0] > arr[1]) {
        max = arr[0];
        second_max = arr[1];
    } else {
        max = arr[1];
        second_max = arr[0];
    }

    // Loop through the array starting from the third element
    for (int i = 2; i < size; i++) {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }

  
    if (max == second_max) {
        printf("All elements are the same or no distinct second largest value found.\n");
    } else {
 
        printf("Second largest number is %d\n", second_max);
    }

    return 0;
}




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

    int largest = arr[0];
    for(int i = 0; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i];

        }
    }

    printf("Largest number is %d\n", largest);


    return 0;
}
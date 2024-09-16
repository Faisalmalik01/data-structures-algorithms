#include <stdio.h>

int main()
{
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

    printf("Odd elements in the array are: ");
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 != 0) { //check if the element is odd by checking the remainder of the division by 2 
            printf("%d ", arr[i]);

        }
    }

    return 0;
}
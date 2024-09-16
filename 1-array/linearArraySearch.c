#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of an Array: ");
    scanf("%d", &size);

    int arr[size];

    // Input elements into the array
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element at index %d: ", i);
        scanf("%d", &arr[i]);  
    }

    int searchTarget;
    printf("Enter the number to search: ");
    scanf("%d", &searchTarget);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == searchTarget)
        {
            printf("Element found at index %d\n", i);
            return 0;  
        }
    }

    // If the element was not found in the loop
    printf("Element not found\n");
    return 0;
}

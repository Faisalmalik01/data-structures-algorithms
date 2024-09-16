// #include <stdio.h>

// int main() {
//     int size;

//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     int arr[size];

//     for (int i = 0; i < size; i++) {
//         printf("Enter the element at index %d: ", i);
//         scanf("%d", &arr[i]);
//     }

//     int dup = 0;

//     for(int i = 0; i < size; i++) {
//         for(int j = i+1; i < size; i++) {
//             if(arr[i] == arr[j]) {
//                 printf("Duplicate element found: %d at indices %d and %d\n", arr[i], i, j);
//                   dup = 1;
//                break;
//             }

//         }
//         if(dup) {
//             break;
//         }

//     }
//     if(dup == 0) {
//         printf("No duplicate elements found\n");
//     }

//    printf("Array is:\n");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]); 
//     }

//     return 0;
//     }



// #include <stdio.h>

// int main() {
//     int size;

   
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     int arr[size];
//     int actual_size = 0; 

 
//     for (int i = 0; i < size; i++) {
//         printf("Enter the element at index %d: ", i);
//         scanf("%d", &arr[i]);

        
//         int dup = 0; 
//         for (int j = 0; j < i; j++) { 
//             if (arr[i] == arr[j]) { 
//                 printf("This element already exists: %d\n", arr[i]);
//                 dup = 1; 
//                 break;
//             }
//         }

        
//         if (dup) {
//             break; 
//         }

//         actual_size++; 
//     }

   
//     printf("Array is:\n");
//     for (int i = 0; i < actual_size; i++) {
//         printf("%d ", arr[i]);
//     }
  

//     return 0;
// }



#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    int i = 0; 

    // Loop to populate the array
    while (i < size) {
        int new_element;
        printf("Enter the element at index %d: ", i);
        scanf("%d", &new_element);

        // Check for duplicates by comparing the new element with existing elements
        int is_duplicate = 0; // Flag to indicate if a duplicate is found
        for (int j = 0; j < i; j++) { // Check all elements up to the current index
            if (arr[j] == new_element) { // Check if the new element is a duplicate
                printf("This element already exists: %d. Please enter another element.\n", new_element);
                is_duplicate = 1; // Set the duplicate flag
                break; // Stop checking further as a duplicate is found
            }
        }

        // If no duplicate is found, add the element to the array
        if (!is_duplicate) {
            arr[i] = new_element; // Add the new element to the array
            i++; // Increment the actual size counter
        }
    }

    // Print the final array after all valid entries are added
    printf("Final array is:\n");
    for (int k = 0; k < size; k++) {
        printf("%d ", arr[k]); // Print each element
    }
    printf("\n"); // Newline for formatting

    return 0;
}

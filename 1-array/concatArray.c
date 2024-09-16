#include <stdio.h>

int main()
{
    int arr_1[5], arr_2[5], arr_3[10];
    int size = 5;
    int size2 = 10;

    for (int i = 0; i < size; i++) {
        printf("Enter value for Array one at index %d: ", i);
        scanf("%d", &arr_1[i]);
    }
    for (int i = 0; i < size; i++) {
        printf("Enter value for Array Two at index %d: ", i);
        scanf("%d", &arr_2[i]);
    }

    for (int i = 0; i < size; i++) {
        arr_3[i] = arr_1[i];
    }

    for (int i = 0; i < size; i++) {
        arr_3[i + size] = arr_2[i];
    }

    printf("Concatenated array is:\n");
    for (int i = 0; i < size2; i++) {
        printf("%d ", arr_3[i]);
    }
    printf("\n");

    return 0;
}
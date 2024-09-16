#include <stdio.h>

int main() {
    int n;
    printf("Enter a number to reverse: ");
    scanf("%d", &n);

    int reversedNum = 0;
    while (n != 0) { 
        int remainder = n % 10; //
        reversedNum = reversedNum * 10 + remainder; 
        n = n / 10;
    }

    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
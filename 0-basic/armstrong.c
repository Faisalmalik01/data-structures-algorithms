//Armstrong number is a number that is equal to the sum of its own digits raised to the power of the number of digits. For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.

#include <stdio.h>

int main() {

    int n, originalNum, remainder, result = 0, nDigits = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalNum = n;

    // Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++nDigits;
    }

    originalNum = n;

    // Calculate the sum of nth power of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
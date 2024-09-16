//Perfect Number : A perfect number is a positive integer that is equal to the sum of its proper divisors excluding itself. 
//For example, 28 is a perfect number because its proper divisors are 1, 2, 4, 7, 14 and 1 + 2 + 4 + 7 + 14 = 28.
#include <stdio.h>

int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

int main() {
    int n;
    printf("Enter a number to check if it is a perfect number: ");
    scanf("%d", &n);

    if (isPerfect(n)) {
        printf("%d is a perfect number\n", n);
    } else {
        printf("%d is not a perfect number\n", n);
    }

    return 0;
}

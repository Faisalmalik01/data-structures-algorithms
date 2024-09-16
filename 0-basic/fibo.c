// Fibonacci Sequence
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) {
        printf("%d, ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
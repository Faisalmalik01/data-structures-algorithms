// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter a number to find its factorial: ");
//     scanf("%d", &n);


//     int factorial = 1;
//     for (int i = 1; i <= n; i++) {
//         factorial = factorial * i;
//     }

//     printf("Factorial of %d = %d\n", n, factorial);


//     return 0;
// }


//Factorial Using a Loop and Function

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {

    int n;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &n);

    printf("Factorial of %d = %d\n", n, factorial(n));

    return 0;
}
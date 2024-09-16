
// #include <stdio.h>

// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s", str);

//     int len = 0;
//     while (str[len] != '\0') {     // '\0' is the null character which marks the end of a string in C programming 
//         len++;
//     }

//     int isPalindrome = 1;
//     for (int i = 0; i < len / 2; i++) {
//         if (str[i] != str[len - i - 1]) {
//             isPalindrome = 0;
//             break;
//         }
//     }

//     if (isPalindrome) {
//         printf("The string is a palindrome\n");
//     } else {
//         printf("The string is not a palindrome\n");
//     }

//     return 0;
// }

// Write a program to check if a given number is a palindrome.

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number to check if it is a palindrome: ");
    scanf("%d", &n);

    int temp = n;
    int reversed = 0;
    while (temp > 0) {
        int remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    }

    if (reversed == n) {
        printf("%d is a palindrome\n", n);
    } else {
        printf("%d is not a palindrome\n", n);
    }

    return 0;
}
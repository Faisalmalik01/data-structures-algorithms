// Write a program to reverse a given string.

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = 0;
    while (str[len] != '\0') {     // '\0' is the null character which marks the end of a string in C programming 
        len++;
    }

    printf("Reversed string: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int generateRandomNumber(int n) {
    srand(time(0)); // Seed the random number generator
    return rand() % n + 1; // Generate a random number between 1 and n
}

int main() {
    int number, guess, attempts = 0;
    number = generateRandomNumber(100); // Generate a random number between 1 and 100

    do {
        printf("Guess a number between 1 and 100: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high!\n");
        } else if (guess < number) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number);

    return 0;
}
#include <stdio.h>

int getValidInput() {
    int guess;
    while (1) {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) == 1) {
            while (getchar() != '\n'); // Clear the input buffer
            return guess;
        } else {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear the input buffer
        }
    }
}

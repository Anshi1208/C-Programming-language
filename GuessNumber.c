#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;

    srand(time(0)); // Seed the random number generator
    number = rand() % 100 + 1; // Random number between 1 and 100

    printf("Guess the number (1-100): ");
    do {
        scanf("%d", &guess);
        if (guess < number) printf("Too low!\n");
        else if (guess > number) printf("Too high!\n");
    } while (guess != number);

    printf("Congratulations! You guessed it!\n");
    return 0;
}

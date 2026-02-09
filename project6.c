// NUMBER GUESSNING GAME
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    srand(time(NULL)); // Seed the random number generator with the current time
    int number_to_guess = rand() % 100 + 1; // Generate a random number between 1 and 100
    int user_guess = 0; 
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100. Can you guess it?\n");
    while (user_guess != number_to_guess) {
        printf("Enter your guess: ");
        scanf("%d", &user_guess);
        if (user_guess < number_to_guess) {
            printf("Too low! Try again.\n");
        } else if (user_guess > number_to_guess) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d correctly!\n", number_to_guess);
        }
    }
}



// ROCK PAPER SCISSORS GAME
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    srand(time(NULL)); // Seed the random number generator with the current time
    int user_choice;
    int computer_choice = rand() % 3 + 1; // Generate a random number between 1 and 3
    printf("Welcome to the Rock Paper Scissors Game!\n");
    printf("Choose your move:\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &user_choice);

    if (user_choice < 1 || user_choice > 3) {
        printf("Invalid choice. Please enter a number between 1 and 3.\n");
        return;
    }

    // Display computer's choice
    printf("Computer chose: ");
    switch (computer_choice) {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
    }

    // Determine the winner
    if (user_choice == computer_choice) {
        printf("It's a tie!\n");
    } else if ((user_choice == 1 && computer_choice == 3) ||
               (user_choice == 2 && computer_choice == 1) ||
               (user_choice == 3 && computer_choice == 2)) {
        printf("Congratulations! You win!\n");
    } else {
        printf("Sorry, you lose. Better luck next time!\n");
    }
}

//quiz game
#include <stdio.h>
#include <string.h> 
void main()
{
    char question[][100] = {
        "What is the capital of France?",
        "What is 2 + 2?",
        "Who wrote 'To Kill a Mockingbird'?"
    };
    char options[4][50] = {
        "A. Berlin\nB. Madrid\nC. Paris\nD. Rome",
        "A. 3\nB. 4\nC. 5\nD. 6",
        "A. Harper Lee\nB. J.K. Rowling\nC. Ernest Hemingway\nD. Mark Twain"};
        
    char answers[] = {'C', 'B', 'A'};
    char userAnswer;
    int score = 0;  
    for (int i = 0; i < 3; i++) {
        printf("%s\n", question[i]);
        printf("%s\n", options[i]);
        printf("Enter your answer (A, B, C, D): ");
        scanf(" %c", &userAnswer);
        userAnswer = toupper(userAnswer); 
        if (userAnswer == answers[i]) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! The correct answer is %c.\n", answers[i]);
        }
    }
    printf("Your final score is: %d out of 3\n", score);    

}








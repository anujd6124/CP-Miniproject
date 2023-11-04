#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
                while(1)

                {
    int playerChoice, computerChoice;

    printf("Rock, Paper, Scissors Game\n");
    printf("Enter your choice:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n4. Exit\n");
    scanf("%d", &playerChoice);

    if (playerChoice < 1 || playerChoice > 4) {
        printf("Invalid choice. Please enter a number between 1 and 4.\n");
        return 1;
    }

    // Generate a random choice for the computer
    srand(time(NULL));
    computerChoice = rand() % 3 + 1;

    // Display the choices
    printf("\nYour choice: ");
    switch (playerChoice) {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
        case 4:
                printf("Exit");
                return 1;
    }

    printf("Computer's choice: ");
    switch (computerChoice) {
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
    if (playerChoice == computerChoice) {
        printf("\nIt's a tie!\n");
    } else if ((playerChoice == 1 && computerChoice == 3) ||
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
        printf("\nYou win!\n");
    } else {
        printf("\nComputer wins!\n");
    }
                }
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;

    printf("Rock Paper Scissors Game!\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &userChoice);

    // Generate computer choice
    srand(time(0));
    computerChoice = (rand() % 3) + 1;

    // Show choices
    printf("You chose: ");
    if (userChoice == 1) printf("Rock\n");
    else if (userChoice == 2) printf("Paper\n");
    else if (userChoice == 3) printf("Scissors\n");
    else {
        printf("Invalid choice!\n");
        return 1;
    }

    printf("Computer chose: ");
    if (computerChoice == 1) printf("Rock\n");
    else if (computerChoice == 2) printf("Paper\n");
    else printf("Scissors\n");

    // Determine winner
    if (userChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }

    return 0;
}
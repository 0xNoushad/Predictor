#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int secretNumber = rand() % 100 + 1;
    int guess, attempts = 0;
    char playAgain;

    do {
        printf("Welcome to the Number Predictor!\n");
        printf("Guess the number between 1 and 100.\n");

        do {
            printf("Your guess: ");
            scanf("%d", &guess);

            if (guess == secretNumber)
                printf("Congratulations! Guessed in %d attempts.\n", attempts);
            else
                printf(guess < secretNumber ? "Too low! Try again.\n" : "Too high! Try again.\n");

            attempts++;

        } while (guess != secretNumber);

        printf("Play again? (y/n): ");
        scanf(" %c", &playAgain);

        if (playAgain == 'y' || playAgain == 'Y') {
            secretNumber = rand() % 100 + 1;
            attempts = 0;
        }

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thanks for playing! Goodbye.\n");
    return 0;
}

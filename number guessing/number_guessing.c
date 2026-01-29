#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int random, guess, no_of_guess = 0;
    /* seed RNG */
    srand((unsigned)time(NULL));

    printf("Welcome to the world of Guessing Number\n");
    random = (rand() % 100) + 1; /* 1..100 */

    do {
        printf("\nPlease enter your guess (1 to 100): ");
        if (scanf("%d", &guess) != 1) {
            /* handle invalid input */
            int c;
            printf("Invalid input. Please enter an integer.\n");
            /* clear stdin until newline */
            while ((c = getchar()) != '\n' && c != EOF) {}
            continue;
        }
        no_of_guess++;

        if (guess < random) {
            printf("Guess a larger number.\n");
        } else if (guess > random) {
            printf("Guess a smaller number.\n");
        } else {
            printf("Congratulations! You have successfully guessed the number in %d attempts.\n", no_of_guess);
        }
    } while (guess != random);

    printf("Bye Bye, Thanks for Playing.\n");
    printf("Developed by: pritamku0124\n");
    return 0;
}

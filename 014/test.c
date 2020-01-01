#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) { 

    time_t t;
    srand((unsigned) time(&t));

    int randomNumber = rand() % 21;

    int guesses = 5; 
    int guessed;

    printf("This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20 which you must guess.\n");

    while (guesses > 0) {

        printf("You have %d tries left.\n", guesses);
        printf("Enter a guess: ");

        scanf("%d", &guessed);

        if (guessed < 0 || guessed > 20) {
            printf("The value you provided is not a valid guess.\nPlease try again.\n");
            continue;
        }

        if (guessed == randomNumber) {
            printf("Congratulations, you win.\n");
            break;
        } else if (guessed > randomNumber) {
            printf("Sorry, %d is wrong. My number is less than that.\n", guessed);
            --guesses;
            continue;
        } else if (guessed < randomNumber) {
            --guesses;
            printf("Sorry, %d is wrong. My number is greater than that.\n", guessed);
            continue;
        }

    }

    if (guesses == 0) {
        printf("Sorry, you lose.\nMy number was %d.\n", randomNumber);
    }

    return 0; 
}

//
// Created by NBJ on 7/30/2025.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    time_t t;
    int counter = 4;
    srand((unsigned) time(&t));

    int randomNumber = rand() % 21;
    int guessedNumber;
    printf("Enter a number between 0 and 20:\n");
    scanf("%i", &guessedNumber);
    while (guessedNumber > 21 || guessedNumber < 0) {
        if (counter==0){ break;}
        printf("Enter a number between 0 and 20:\n");
        scanf("%i", &guessedNumber);
        counter--;

    }

    while (guessedNumber <= 21 && guessedNumber >= 0) {

        while (counter != 0) {
            if (guessedNumber == randomNumber) {
                printf("Entered number %i random number = %i \n", guessedNumber, randomNumber);
                break;
            }
            else if (guessedNumber > randomNumber) {
                printf("Entered Number is greater than random reenter new one:\n");
                scanf("%i", &guessedNumber);
                counter--;
            } else {
                printf("Entered Number is smaller than random reenter new one:\n");
                scanf("%i", &guessedNumber);
            }
        }

      
    }
}

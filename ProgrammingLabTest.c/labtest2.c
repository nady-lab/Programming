/*
    A C program that implements a word guessing game.

    The program will prompt the user to guess the characters in the word "coding"
    The program will also provide feedback on wether each guessed character entered is present or not.
        the user is allowed a max of 7 wrong character guesses.

    Nadyla Da Cunha Barbosa 

    24/03/2026
*/

// libraries needed
#include <stdio.h>
#include <string.h>

// max size that the char array can be 
#define SIZE 10
#define MAX_ATTEMPTS 7

// function to check if the character entered by the user is in the word "coding"
int checkGuess(char [], char);

int main()
{
    // array to store the word we're trying to guess
    char word[SIZE] = "coding";
    // array to store the users guesses
    char guessedWord[SIZE];
    // var to store the max attempts
    int attempts = MAX_ATTEMPTS;
    // variable to store the char from input
    char guess;

    // initialise the guessword array w/ underscores
    for (int i = 0; i < strlen(word); i++)
    {
        guessedWord[i] = '_';
    }// end for

    // place the null char in the last element of the guessWord array
    guessedWord[strlen(word)] = '\0';

    printf("\nWelcome to Guess the Word game!\n");

    // user has a max of 7 guesses
    while (attempts > 0)
    {
        printf("\nEnter your guess (single character): ");
        scanf("%c", &guess);

        // clear input buffer
        while(getchar() != '\n');

        // call function checkGuess() to check if the guessed char is in the word
        if(checkGuess(word, guess) == 1)
        {
            // update guessedWord array w/ correctly guessed char
            for (int i = 0; i < strlen(word); i++)
            {
                if (word[i] == guess)
                {
                    guessedWord[i] = guess;
                }// end if
            }// end for

            printf("\n%c is in the word at: %s\n", guess, guessedWord);

            // if the user correctly guesses the word, break out of the loop
            if (strcmp(word, guessedWord) == 0)
            {
                printf("\nCongratulations! You guessed the word: %s\n", word);

                break;
            }// end if
        } else {
            // if the user guesses the WRONG char in the word
            printf("%c is not in the word\n", guess);

            // decrease the number of attempts
            attempts--;

            printf("Attempts left: %d\n", attempts);

            // if all guess attempts are zero, end program
            if (attempts == 0)
            {
                printf("\nSorry, you've run out of attempts. The word was: %s\n", word);
                break;
            }// end if

        }// end else

    }// end while

    return 0;
}// end main

// function to check if the character entered by the user is in the word "coding"
int checkGuess(char word[], char guess)
{
    int len = 0;

    // get the length  of the word to be guessed -> "coding"
    len = strlen(word);

    for (int i = 0; i < len; i++)
    {
        // if guessed char is in the word
        if (word[i] == guess)
        {
            return 1;
        }// end if
    }

    // if guessed char is NOT in the word
    return 0;

}// end checkGuessser()
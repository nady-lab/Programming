/*
    A program that allows a user to input TWO words.
    Compare these words to see if they are the same.
    Display appropiate messages wheter or not the words are the same.

    Nadyla da Cunha Barbosa

    03/03/2026
*/

#include <stdio.h>
#include <string.h>

#define SIZE 100

int main()
{
    char w1[SIZE];
    char w2[SIZE];
    int result = 0;

    printf("\nPlease enter your first word: \n");
    fgets(w1, sizeof(w1), stdin);

    printf("\nPlease enter your second word: \n");
    fgets(w2, sizeof(w2), stdin);

    result = strcmp(w1, w2);

    if (result == 0)
    {
        printf("\nString are the same.\n");
    }
    else
    {
        printf("\nStrings are NOT the same.\n");
    }

    return 0;
}// end main
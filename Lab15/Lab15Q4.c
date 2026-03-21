/*
    Using separe functions, extending Q3 to do the following:
    a) Concatenate the first word entered to the end of the string: "First word entered is"
        Display it on the screen.
    b) Calculate the length of the string in part a) above and display the number of characters used.

    Nadyla da Cunha Barbosa

    03/03/2026
*/

#include <stdio.h>
#include <string.h>

// max size that the string can be
#define SIZE 100

// function that concatenates the sentences
void concat(char []);

// function that calculates the length of the string 
void length(char []);

int main()
{
    // char array to store the user's input
    char input[SIZE];

    printf("\nPlease enter your string: \n");
    // store the user's input in the char array input[]
    fgets(input, sizeof(input), stdin);

    // function that concatenates the strings and 
    // calculates the length of the string
    concat(input);

    return 0;
}// end main

// function that concatenated the sentence
void concat(char s[])
{
    // sentence that will concatenated to the user's input
    char base[SIZE] = "First word entered is ";

    // concatenates the base sentence with the user's input (s[])
    strcat(base, s);

    // displays the concatenated sentence
    printf("\n%s\n", base);

    // calculates the total amount of characters in the sentence
    length(base);
}// end concat()

// function that calculates the length of the string
void length(char string[])
{
    // variable to store the total amount of characters
    int total = 0;

    // calculates the length of the sting[]
    total = strlen(string);

    // displays the number of charactes used
    printf("The total amount of characters in your string is: %d\n", total);
}// end length()
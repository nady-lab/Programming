/*
    A program to read in your name an display it with a space between each letter.
    For example: John gets displayed as J o h n

    Nadyla da Cunha Barbosa

    24/02/2026
*/

#include <stdio.h>
#include <string.h>

// max size of the array
#define SIZE 21

int main()
{
    // array to store name from the user
    char input[SIZE];
    // array to store the name with spaces
    char output[2 * SIZE];

    // variables used in the loop to store the names
    int i;
    int j = 0;

    // ask user to input their name
    printf("\nPlease enter your name:\n");
    fgets(input, SIZE, stdin);

    // loops through the length of the users input
    for(i = 0; i < strlen(input) ; i++)
    {
        // checks if the loop has reached the END of the string (NULL terminator -> '\0')
        if(input[i] != '\0')
        {
            // assigns input[i] to output[j] THEN does the operation j = j + 1
            output[j++] = input[i];
            // assigns ' ' to output[j] THEN does the operation j = j + 1
            output[j++] = ' ';
        }
    }

    // assign the NULL terminator to the first UNUSED 
    // element of the array after the name reassignation
    output[j]= '\0';

    // displays the name with the according spaces
    printf("\nName entered was: \n");
    puts(output);

    return 0;
}
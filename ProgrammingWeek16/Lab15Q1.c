/*
    Part A
    A program to ask a user for their name.
    The users name is then compared with a list of names held in an array in memory.
    If the user's name is in the list, display a suitable greeting
    Otherwise, display the message "Name not found."

    Part B
    A program to input a four character string.
    If every character in the string is a digit (0-9), then convert the string into an integer
    add 1 to it
    Display the result.
    If any one of the characters in the string is not a digit, display an error message


    Nadyla da Cunha Barbosa

    03/03/2026
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// PART A
/*
// max amount of characters in the input string
#define SIZE 100
// amount of names inside the list
#define LIST_SIZE 4

int main()
{
    char name[SIZE];
    // list of names stored in memory
    char name_list[LIST_SIZE][SIZE] =
    {
        "Mary",
        "John",
        "Anna",
        "Paul"
    };
    // variable to store result of the comparison
    int result = 0;
    int i = 0;

    printf("\nPlease enter your name: \n");
    fgets(name, SIZE, stdin);

    // result = strcmp(name, name_list); -> doesn't work as it has to search in the list
    for(i = 0; i < LIST_SIZE; i++)
    {
        // checks each element of name_list and if it name matches strcmp returns 0
        if(strcmp(name, name_list[i]) == 0)
        {
            // if name is found result equals 1
            result = 1;
            break;
        }
    }

    // if result equals 1
    if(result == 1)
    {
        // print welcome message
        printf("\nWelcome back %s\n", name);
    }
    else // if result is not equal to 1
    {
        // print error message
        printf("\nName not found.\n");
    }

    return 0;
}   */

// PART B

#define SIZE 6
#define NUMBS 10

int main()
{
    char input[SIZE];
    int nums;
    int valid = 1;

    printf("Enter a 4-character string: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline
    if(input[strlen(input)-1] == '\n')
        input[strlen(input)-1] = '\0';

    // Check digits
    for(int i = 0; input[i] != '\0'; i++)
    {
        if(!isdigit(input[i]))
        {
            valid = 0;
            break;
        }
    }

    if(valid)
    {
        nums = atoi(input);
        nums += 1;

        printf("\nResult is: %d\n", nums);
    }
    else
    {
        printf("\nError: String contains non-digit characters.\n");
    }

    return 0;
}
/*
    A C program that enters a string from stdin and uses separe functions to:
    a) count the number of times a vowel occurs in the sentence.
    b) find the number of characters in the string entered (by using a built-in string fucntion)
        using this number display the string in reverse.
    c) concatenate the string entered to the end of the following string -> "I entered the string"
        and displays the new string.

    Nadyla da Cunha Barbosa

    10/03/2026
*/

#include <stdio.h>
#include <string.h>

#define SIZE 100

// function that counts the number of times a vowel occurs in the sentence
int vowelCount(char[]);

// function that counts the number of characters in the string
// and displays the string in reverse
void reverse(char[]);

// function that concatenated the string and displays the new string
void concat(char []);

int main()
{
    // char array to store the user's input
    char input[SIZE];

    printf("\nPlease enter your string: \n");
    fgets(input, sizeof(input), stdin);
    printf("\n");

    // remove addtional \0 character from fgets
    if(strlen(input) > 0 && input[strlen(input) - 1] == '\n')
    {
        input[strlen(input) - 1] = '\0';
    }// end if

    printf("The total amount of vowels in your string is: %d\n", vowelCount(input));

    reverse(input);
    concat(input);

    return 0;
} // end main()

// function that counts the number of times a vowel occurs in the sentence
int vowelCount(char string[])
{
    int counter = 0;

    for (int i = 0; i < strlen(string); i++)
    {
        switch(string[i])
        {
        // current element in string is a vowel
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        {
            // counter goes up
            counter++;
            break;
        } // end case vowel
        default:
            break;
        } // end swtich
    }// end for

    return counter;
}// end vowelCounter()

// function that counts the number of characters in the string
// and displays the string in reverse
void reverse(char string[])
{
    // counts the number of characters in the string and stores it in length
    int length = strlen(string);
    char reverString[length];

    for(int i = 0; i < length; i++)
    {   
        // first element of new array is the last element of the old array
        reverString[i] = string[length - 1 - i];
    }// end for 

    // adding NULL terminator to the string
    reverString[length] = '\0';

    // display the reverse string
    printf("The reverse string is: %s\n", reverString);
}// end reverse()

// function that concatenated the string and displays the new string
void concat(char string[])
{
    // base string that i want to be concatenated
    char base[SIZE] = "I entered the string ";
    // concatenates the string and stores it in base
    strcat(base, string);

    // display the concatenated string 
    printf("The concatenated string is: %s\n", base);
}// end concat()    
/* 
    A program that asks the user to enter a character from standard-input
    and displays a message whether the character is a vowel or not

    Nádyla Barbosa

    14/10/2025
*/

#include <stdio.h>

int main() {
    //assigned a variable to store what the user inputs
    char user_input = ' ';

    printf("Enter a single character and I'll tell you if it's a vowel or not:\n");
    //stores what the user inputs in the memory
    user_input = getchar();

    //checks wether the input was a vowel, regardless if it's uppercase or lowercase
    switch (user_input)
    {
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
            printf("It's a vowel.\n");

            break;
        } //end case a,e,i,o,u OR A,E,I,O,U 
        
        //what to print if the input it's not one of the cases above
        default:
        {
            printf("What you entered is not a vowel.\n");

            break;
        } //end default
    
    } //end switch

    return 0;
} //end main

   

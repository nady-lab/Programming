/*
    Write a function with TWO parameters (char and an int).

    The function must DISPLAY the CHAR PARAMETER a certain number of times
    on one line where this number is the int parameter.

    Nadyla Da Cunha Barbosa

    06/02/2026
*/

#include <stdio.h>
#include <stdlib.h>

// function prototype -> function to print char
void printChar(char, int);

int main() {
    char character;
    int n;

    printf("Enter what you would like to print: \n");
    scanf("%c", & character);

    printf("Enter how many time you would like to print %c: \n", character);
    scanf("%d", & n);

    printChar(character, n);

    printf("\n\nFinished printing.\n\n");

    return 0;
}// end main()

// function to print character
void printChar(char type, int num) 
{
    printf("\n");

    for (int i = 0; i < num; i++)
    {
        printf("%c", type);
    }// end for

}// end printChar()
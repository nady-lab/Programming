/*
    a program that asks the user to enter an integer between 1 and 100. 
    Check whether the integer is even or odd and print a message on the screen stating, 
    "Number x is Even" or "Number y is Odd".

    Nádyla Barbosa

    14/10/2025
*/

#include <stdio.h>

int main() {

    int number = 0;

    printf("Enter a number between 1 and 100 and I'll tell wether it's odd or even: \n");
    scanf("%d", &number);

    if (number > 1 && number < 100)
        if (number % 2 == 0)
        {
            printf("Your number is even.\n");
        }
        
        else
        {
            printf("Your number is odd.\n");
        }
    
    else
    {
        printf("Your number is out of range.\n");
    }

    return 0;
}
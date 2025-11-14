/*
    Ask the user for:
    Two numbers and a math operator (+, -, *, /).
    Then use a switch statement to perform the right operation.
    If the operator is invalid, print an error message.

    Nadyla Barbosa

    28/10/2025
*/

#include <stdio.h>

int main() {

    //declare and assigned variables
    float num1 = 0;
    float num2 = 0;
    char op = ' ';
    float result = 0;

    //ask the user for two nums and an opperator
    printf("Enter the first num: ");
    scanf("%f", &num1);
    printf("Enter the second num: ");
    scanf("%f", &num2);
    printf("Enter operator: ");
    //have to add space before the % so it doens't read in the
    //automatic \n after the printf
    scanf(" %c", &op);

    switch (op)
    {
    case ('x'):
    case ('X'):
    case ('*'):
        result = num1 * num2;
        break;
    
    case ('+'):
        result = num1 + num2;
        break;

    case ('-'):
        result = num1 - num2;
        break;

    case ('/'):
        result = num1 / num2;
        break;

    default:
        printf("Error. Invalid operator.\n");
        break;
    }

    printf("%f\n", result);

    return 0;
}
/*
    TheMathMagician.c
    A simple C program demonstrating basic arithmetic operations.
    
    This program outputs the sum, difference, product, quotient, and remainder
    on two numbers provided by the user.

    Nadyla Barbosa

    28/10/2025
*/

#include <stdio.h>

int main() {
    float num1 = 0;
    float num2 = 0;
    float sum = 0;
    float difference = 0;
    float product = 0;
    float quotient = 0;
    float remainder = 0;

    //ask user for the two numbers
    printf("Give me the first num: ");
    scanf("%f", &num1);
    printf("Give me the second num: ");
    scanf("%f", &num2);

    //define the arithmetic operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    remainder = (int)num1 % (int)num2;
    
    printf("%0.2f, %0.2f, %0.2f, %0.0f, %0.0f\n", sum, difference, product, quotient, remainder);

    return 0;
}
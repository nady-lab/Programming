/*
    Write a program to input three floating point numbers from
    the keyboard and to calculate their sum && their average.

    Nádyla Barbosa

    07/10/2025
*/

#include <stdio.h>

int main() 
{
    //declare three variables to store the input, the sum and the average
    float num1;
    float num2;
    float num3;
    float sum;
    float average;

    //ask user for input and store it in the variables num1, num2 & num3
    printf("Input a float num: ");
    scanf("%f", &num1);

    printf("Input another float num: ");
    scanf("%f", &num2);

    printf("One more: ");
    scanf("%f", &num3);

    //assign sum after the scanfs so it sums the new values of the nums
    sum = num1 + num2 + num3;
    printf("The sum of the numbers you entered is: %.3f\n", sum);

    //assign average afther the scanfs so it finds the average of the new valus of nums
    average = (num1 +num2 + num3)/3;
    printf("The average of the numbers you entered is; %.3f\n", average);

    return 0;


}
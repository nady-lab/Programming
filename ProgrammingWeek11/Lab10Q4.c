/*
    Write a program that asks the user to enter 2 integer values. Store these in variables
    called NUM1 and NUM2 respectively. Using pointers ONLY:

    a) find the sum of these numbers

    b) store them in a third variable called sum

    c) display this value stored in variable sum. 

    (Hint: the dereference operator will be used to perform most of your task). 
    NB - don't forget that you will need 3 pointer variables

    Nadyla da Cunha Barbosa

    02/12/2025

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num1;
    int num2;
    int *ptr1;
    int *ptr2;
    int *sum;

    ptr1 = &num1;
    ptr2 = &num2;

    //asks the user to enter 2 integer values
    printf("\n");
    printf("Please enter value 1: ");
    scanf(" %d", ptr1);

    printf("Please enter value 2: ");
    scanf(" %d", ptr2);
    printf("\n");

    //store them in a third variable called sum
    *sum = *ptr1 + *ptr2;

    //display this value stored in variable sum
    printf("\nThe sum of these numbers are: %d\n\n", *sum);

    return 0;
}
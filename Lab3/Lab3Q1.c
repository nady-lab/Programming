/*
    A program that asks the user to enter 3 whole numbers and
    displays these on separate lines.

    Nadyla Barbosa

    07/10/2025
*/

#include <stdio.h>

int main () 
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Give me three whole numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%d\n%d\n%d\n", num1, num2, num3);

    return 0;
}
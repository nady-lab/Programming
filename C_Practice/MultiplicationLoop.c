/*
    Ask for a number, then use a for loop to 
    print its multiplication table up to 12.

    Nadyla Barbosa

    28/10/2025
*/

#include <stdio.h>

int main() {
    float num1 = 0;
    float result = 0;
    float i = 0;

    printf("Give me a num: ");
    scanf("%f", &num1);

    for (i = 1; i <= 12; i++) {
        result = num1 * i;
        printf("%0.0f x %0.0f = %0.0f\n", num1, i, result);
    }

    return 0;
}
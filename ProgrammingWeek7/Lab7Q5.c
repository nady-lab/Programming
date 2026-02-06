/*
    a program that uses a char array with 5 elements. Enter any 5 characters of your
    choice into the array. Output the contents of the array to the screen and display each
    character.

    Nadyla da Cunha Barbosa

    21/11/2025
*/

#include <stdio.h>
#define ARRAY_SIZE 5

int main() {
    char chars[ARRAY_SIZE];
    int i;

    // Input 5 characters
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("Enter character %d: ", i + 1);
        scanf(" %c", &chars[i]); // Note the space before %c to skip any leftover whitespace
    }

    // Display all characters in the array
    printf("\nArray contents:\n");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%c\n", chars[i]);
    }

    return 0;
}


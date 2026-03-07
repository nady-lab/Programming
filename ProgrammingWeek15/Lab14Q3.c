/*
    A program to display how a character array can be initialised with a string.

    Attempt both:
    i) by initialising each element of the array separetly using a specific character
    ii) by initialising the array with a complete string in double quotes

    What happens if you use point (i) but do NOT include the NULL character?


    Nadyla da Cunha Barbosa

    24/02/2026
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // part i)
    char my_word1[6];  // no space for null terminator yet
    my_word1[0] = 'H';
    my_word1[1] = 'e';
    my_word1[2] = 'l';
    my_word1[3] = 'l';
    my_word1[4] = 'o';
    // my_word1[5] = '\0';  // Uncommenting this makes it a proper string

    printf("Way 1 (without null terminator): ");
    printf("%s\n", my_word1);   // Undefined behaviour if null not included

    // If we include the null terminator:
    my_word1[5] = '\0';
    printf("Way 1 (with null terminator): %s\n", my_word1);

    // part ii)
    char my_word2[] = "Hello";   // automatically includes '\0'
    printf("Way 2 (with double quotes): %s\n", my_word2);

    return 0;
}
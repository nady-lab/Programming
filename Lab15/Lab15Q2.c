/*
    A program that reads a sentence from standard input and uses SEPARATE functions to:

    a) calculate the number of characters in a sentence
    b) append the sentence to the end of the string -> "“My sentence is: "


    Nadyla da Cunha Barbosa

    03/03/2026
*/

#include <stdio.h>
#include <string.h>

#define SIZE 101

int num_char(char []);
void concat(char []);

int main()
{
    char sentence[SIZE];
    int length = 0;

    printf("\n\nPlease enter your string: \n");
    fgets(sentence, sizeof(sentence), stdin);

    length = num_char(sentence);
    printf("\nThe length of the string is: %d\n", length);

    concat(sentence);

    return 0;
}

int num_char(char string[])
{
    int length = strlen(string);

    return length;
}

void concat(char addition[])
{
    // have to define the size of array (or else it will overflow)
    char base[SIZE] = "My sentence is: ";
    strcat(base, addition);

    puts(base);
}

/*
    A C program that allows you to enter a string from stdin and using
    seperate functions does the following:

    a) compare the string to the following string "Hello World"

    b) determine if the word "is" occurs in the string entered
    (assuming there is at least 1 occurrence) &&
    counts the number of occurrences

    **Hint: use the built-in string function: strstr(string_to_check, substring);
    function returns a char pointer that points at the memory address of the start of the
    substring if found, otherwise NULL is returned.

    Nadyla Barbosa

    10/03/2026
*/

#include <stdio.h>
#include <string.h>

#define SIZE 100

// function to compare the string to "Hello World"
void compareString(char[]);

// function to count the occurrences of the word "is"
// in the user's string
void isCounter(char[]);

int main()
{
    char input[SIZE];
    int len = 0; // variable to store the length of the string from the user

    printf("\nPlease enter your string: \n");
    fgets(input, sizeof(input), stdin);

    // stores the amount of elements in the char array
    len = strlen(input);

    // remove newline tag
    if (input[len - 1] == '\n')
    {
        input[len - 1] = '\0';
    }

    compareString(input); // call function for part a)

    isCounter(input); // call function for part b)

    return 0;
} // end of main()

// function to compare the user's string to "Hello World"
void compareString(char s[])
{
    char base[SIZE] = "Hello World";
    int result = 0;

    result = strcmp(base, s);

    if (result == 0)
    {
        // if strings are the same, let user know
        printf("\nYour string is equal to \"%s\"\n", base);
    }
    else
    {
        // if strings are NOT the same, let user know
        printf("\nYour string is NOT equal to \"%s\"\n", base);

    } // end if else

} // end compareString

// fucntion to check if the word "is" occurs in the user's string
// and count how many times
void isCounter(char s[])
{
    // array to store the word we want to search for
    char searchWord[] = "is";
    // pointer to store the result of the strstr() function
    char *ptr;

    // variable to store how many times the word appears
    int count = 0;

    // function that searches for the word "is" inside the string s
    ptr = strstr(s, searchWord);

    while (ptr != NULL)
    {
        // ptr points to the first occurrence of "is" inside the string s
        // if ptr == s, it means "is" starts at the beginning of the string
        // *(ptr - 1) checks the character before "is" to see if it's a space
        // -> together, this ensures "is" starts at the beginning of a word

        // *(ptr + 2) checks the character after "is"
        // if it's a space or the end of the string ('\0'),
        // it confirms that "is" ends a word

        if ((ptr == s || *(ptr - 1) == ' ') &&
            (*(ptr + 2) == ' ' || *(ptr + 2) == '\0'))
        {
            count++; // count goes up if both statements are true
        } // end if

        ptr = strstr(ptr + 1, searchWord);
    } // end while

    printf("The word 'is' occurs %d times\n", count); // print result

} // end isCounter

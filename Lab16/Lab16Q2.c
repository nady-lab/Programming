/*
Write a C program that enters a string from stdin and 
   uses seperate functions to do the following:

   A) Compare the string to the following string "Hello World"

   B) Determine if the word “is” occurs in the string entered 
   (assuming there is at least one occurrence). 
   Is it possible to count the number of occurrences?

Hint: try the built-in string function: strstr(string_to_check, substring); 
This function returns a char pointer that points at the memory address of the start of the
substring if found, otherwise NULL is returned.

Emily Bolton
A00021681
10/3/26
*/

#include <stdio.h>
#include <string.h>




/*
#include <stdio.h> //libraries used
#include <string.h>

#define SIZE 100 //symbolic name for size of characer array

void compareString(char s[SIZE]); //define function for part A
void countString(char s[SIZE]); //define function for part B

int main()
{
    char sentence1[SIZE]; //initialise character array for string

    printf("Please enter a sentence: \n"); //stdout giving user instructions
    fgets(sentence1, SIZE, stdin); //read in character array input by user

    int len = strlen(sentence1);
    if(sentence1[len-1] == '\n')
    {
        sentence1[len-1] = '\0';
    }

    compareString(sentence1); //call on function part A passing sentence1 as argument

    countString(sentence1); //call on function part B passing sentence1 as argument

    return 0; //end function
}

void compareString(char s[SIZE]) //this function compares passed string to Hello World and returns if they are the same or not
{
    char sentenceCompare[SIZE] = "Hello World"; //initialise string with value "Hello World"

    if(strcmp(s, sentenceCompare) == 0) //check if both strings are exactly the same
    {
        printf("Your string matches 'Hello World'\n");   //stdout if they are 
    }
    else
    {
        printf("Your string does not match 'Hello World'\n"); //stdout if they are not
    }
}

void countString(char s[SIZE])
{
    char wordLowercase[SIZE] = "is"; //the substring we are looking for
    char wordUppercase[SIZE] = "Is"; //alt of substring in case at beginning and capital
    char *ptr; //used to point to characters in the string
    int count = 0; //initialise variable to count how many times 'is' appears

    ptr = strstr(s, wordLowercase); //searches for 'is' inside passed string s

    while(ptr != NULL) //while there is something to check
    {
        if((ptr == s // 'is' at the beginning  || *(ptr-1) == ' ' /* space before 'is' ) && (*(ptr+2) == ' ' /* space after is  || *(ptr+2) == '\0' // 'is' at the end of string ))
        {
            count++; //if both statements are true add 1 to the count
        }
        
        ptr = strstr(ptr+1, wordLowercase); //move onto next position
    }

    printf("The word 'is' occurs %d times\n", count); //print result
} */
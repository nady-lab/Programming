/*
    A C program to compare the latency between using fgetc() and
    fgets() to open and read a large text file and display to standard output.

    Nadyla da Cunha Barbosa

    28/04/2025
*/

#include <stdio.h>
#include <string.h>


// max chars store per line
#define MAX_CHARS 1001

int main()
{
    // file pointer to a file text1.txt
    FILE *f1;

    // variable to store each character in the files at a time
    char chars1;

    // array to store the strings in the file
    char one_line[MAX_CHARS];

    // open the file for reading
    f1 = fopen("largetext.txt", "r");

    // check if the file 1 was opened successfully 
    if(f1 == NULL)
    {
        printf("\nError opening file\n");
    }// end if
    else
    {
        printf("\ntext1.txt opened successfully.\n\n");

        // while true
        while(1)
        {
            // get character from file 1
            chars1 = fgetc(f1);

            printf("%c", chars1);

        }// end while 
    }// end else

    // print newline for readability
    printf("\n");

    // close file 1
    fclose(f1);

    return 0;

}// end main()
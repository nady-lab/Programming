/*
    A C program to display the lines of a text file
    along with the line numbers.

    Nádyla da Cunha Barbosa

    28/04/2026
*/

#include <stdio.h>
#include <string.h>

#define MAX_CHARS 81

int main()
{
    // file pointer to a file text1.txt
    FILE *f1;

    // array to store the string from the file
    char one_line[MAX_CHARS];

    // variable to store the number of lines
    int lines = 1;

    // open the file for reading
    f1 = fopen("file1.txt", "r");

    // check if the file 1 was opened successfully 
    if(f1 == NULL)
    {
        printf("\nError opening file\n");
    }// end if
    else
    {
        printf("\ntext1.txt opened successfully.\n");

        // while the end of the 
        while(fgets(one_line, MAX_CHARS, f1) != NULL)
        {
            // display the line and line n. from file
            printf("\n%d. %s", lines, one_line);

            // increment lines count by 1
            lines++;

        }// end while

        printf("\n\n");

    }// end else

    // close the file
    fclose(f1);

    return 0;

}// end main()

/*
    A program to compare two text files and display any difference between the files.

    Nadyla da Cunha Barbosa

    21/04/2026
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // file pointer to a file text1.txt
    FILE *f1;
    // file pointer to a file text2.txt
    FILE *f2;

    // variable to store each character in the files at a time
    char chars1;
    char chars2;

    // variable to track the current position in the file
    int i = 0;
    // variable to track how many differences there are
    int differences = 0;

    // open the file for reading
    f1 = fopen("text1.txt", "r");
    // open file 2 for reading 
    f2 = fopen("text2.txt", "r");


    // check if the file 1 was opened successfully 
    if(f1 == NULL)
    {
        printf("\nError opening file\n");
    }// end if
    else
    {
        printf("\ntext1.txt opened successfully.\n");

    }// end else

    //check if file 2 was opened successfully
    if(f1 == NULL)
    {
        printf("\nError opening file\n");
    }// end if
    else
    {
        printf("\ntext2.txt opened successfully.\n");
    }// end else

    // while true
    while(1)
    {
        // get character from file 1
        chars1 = fgetc(f1);
        // get character from file 2
        chars2 = fgetc(f2);

        // if either file ends
        if (chars1 == EOF || chars2 == EOF)
        {
            // break out of loop
            break;
        }

        // if the current character in file 1 and file 2 are different
        if (chars1 != chars2)
        {
            // increment the number of differences by 1
            differences++;
            // display where the position and what the different characters are
            printf("\nThere are differences at %d: '%c' and '%c'\n", i, chars1, chars2);
        }// end if

        // if there are no differences, display to user
        if (differences == 0)
        {
            printf("\nThere aren't any differences in the files\n\n");
            break;
        }// end if

        // increment the position of the checker by 1
        i++;
    }// end while 
    
    // print newline for readability
    printf("\n");

    // close file 1
    fclose(f1);
    // close file 2
    fclose(f2); 
    return 0;

}// end main()
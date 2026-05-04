/*
    A C program to compare the latency between using fgetc() and
    fgets() to open and read a large text file and display to standard output.

    Nadyla da Cunha Barbosa

    28/04/2025
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// max chars store per line
#define MAX_CHARS 1001

int main()
{
    // file pointer to a file text1.txt
    FILE *f1;

    // variable to store each character in the files at a time
    char chars;

    // array to store the strings in the file
    char one_line[MAX_CHARS];

    // variable to track time
    clock_t start, end;
    double time_taken1;
    double time_taken2;

    double latency;

    // open the file for reading
    f1 = fopen("largetext.txt", "r");

    // check if the file 1 was opened successfully 
    if(f1 == NULL)
    {
        printf("\nError opening file\n");

        return 1;
    }// end if

    printf("\nReading using fgetc(): \n\n");
    
    // start timer
    start = clock();

    // while there's still chars to be read, display the read onws
    while ((chars = fgetc(f1)) != EOF)
    {
        putchar(chars);
    }// end while

    // finish timer
    end = clock();

    // calculate the total time taken
    time_taken1 = (double)(end - start) / CLOCKS_PER_SEC; 
    
    printf("\n\n-----------> Time taken using fgetc(): %f seconds\n", time_taken1);

    // close file
    fclose(f1);

    // open file again for the fgets function
    f1 = fopen("largetext.txt", "r");

    if (f1 == NULL)
    {
        printf("\nError opening file (fgets)\n");
        return 1;
    }

    printf("\nReading using fgets():\n\n");

    start = clock();

    while (fgets(one_line, MAX_CHARS, f1) != NULL)
    {
        fputs(one_line, stdout);
    }

    end = clock();
    time_taken2 = (double)(end - start) / CLOCKS_PER_SEC;

    printf("\n\n-----------> Time taken using fgets(): %f seconds\n", time_taken2);

    fclose(f1);

    latency = time_taken1 - time_taken2;

    printf("\n\n-----------> Time difference: %f seconds\n", latency);

    return 0;

}// end main()
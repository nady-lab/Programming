/*
    PART A
    write a program that uses DMA to allocate memory for
    5 floating point numbs. (Can use MALLOC OR CALLOC)

    PART B
    after memery has been allocated for the numbs, enter these numbers into
    the memory block

    PART C
    calculate and display the average of the numbs stored in the memory block


    Nadyla da Cunha Barbosa

    01/02/2026
*/

#include <stdio.h>
#include <stdlib.h>

#define NUM 5

int main()
{
    int total_size_bytes;
    float *ptr;

    float sum = 0, average;

    // calculate the total size of memory needed in bytes
    total_size_bytes = NUM * sizeof(float);

    // stores the address of where the memory block starts
    ptr = malloc(total_size_bytes);

    // checks if malloc was successful OR NOT
    if (ptr == NULL)
    {

        // malloc was unsuccessful
        printf("\nUnable to allocate memory. Program ending...\n");

        return 0;

    } // end if
    else
    {

        // malloc was successful, may proceed with the program
        printf("\nMemory allocated successfully.\n");

        // let user enter the numbers
        printf("Please enter your %d numbers: \n", NUM);

        for (int i = 0; i < NUM; i++)
        {

            scanf("%f", ptr + i);

            sum += *(ptr + i);

        } // end for

        // calculate the average
        average = sum / NUM;

        // display the average
        printf("\nThe average of the numbers is: %f\n", average);

    } // end else

    // free the memory block as the program is now finished
    free(ptr);
    return 0;
} // end main
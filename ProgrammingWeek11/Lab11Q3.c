/*
    COPY OF QS 2

    MODIFY IT TO -> Allocate a second memory block and store the average value
    calculate in part (iii) in this block.

    Display all of the 5 float values in the first memory block 
    and their average value in the second memory block on the screen.

    Hint: you will need to use 2 float pointers, one pointer to the block of memory
    storing the 5 floating-point numbers, the other pointer to the block of memory storing
    the average of the 5 numbers
*/

#include <stdio.h>
#include <stdlib.h>

#define NUM 5
#define SIZE 1

int main()
{
    int total_size_bytes;
    int average_size_bytes;
    float *ptr1;
    float *ptr2;

    float sum = 0;
    float average;

    // calculate the total size of memory needed in bytes
    total_size_bytes = NUM * sizeof(float);
    average_size_bytes = SIZE * sizeof(float);

    // stores the address of where the memory block starts
    ptr1 = malloc(total_size_bytes);
    ptr2 = malloc(average_size_bytes);

    // checks if malloc was successful OR NOT
    if (ptr1 == NULL || ptr2 == NULL)
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

            scanf("%f", ptr1 + i);

            sum += *(ptr1 + i);

        } // end for

        // calculate & store the average in the memory block
        for (int i = 0; i < SIZE; i++)
        {
            *(ptr2 + i) = sum / NUM;

        }// end for

        // loop to print the values inside the block of memory
        printf("\nThe numbers you put are: \n");
        for (int i = 0; i < NUM; i++)
        {
            printf("%.4f\n", *(ptr1 + i));

        } // end for

        // display the average
        printf("\nThe average of the numbers is: %f\n", *ptr2);

    } // end else

    // free the memory block as the program is now finished
    free(ptr1);
    return 0;
} // end main
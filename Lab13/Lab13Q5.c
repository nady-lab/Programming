/*
    PASSING 1-D ARRAY
    A program that:
    1) asks the user to enter FIVE numbers from standard input.
    2) pass the array of five elements to a function
        * the function checks each number in the array if its even or odd & display the result
        * the function should then calculate the TOTAL AMOUNT OF EVEN NUMBERS
          & return this value to the main() function AND display it.

    17/02/2026

    Nadyla da Cunha Barbosa
*/

#include <stdio.h>
#include <stdlib.h>

// max number that can be entered in the array
#define SIZE 5

// function to calculate the amount of EVEN numbers in the array
int evenCounter(int[]);

int main()
{
    int values[SIZE];
    int even_total;
    int i;

    printf("\nEnter %d numbers: \n", SIZE);

    // loop that allows user to enter 5 elements into the array
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &values[i]);
    } // end for
    printf("\n");

    // value of the function evenCounter() is stored
    even_total = evenCounter(values);

    // value of the function evenCounter() is displayed
    printf("\n\nThe total amount of EVEN numbers is: %d\n\n", even_total);

    return 0;
}

int evenCounter(int num_array[])
{
    int total_even = 0;
    int i;

    // checks if element of array is even or odd
    for (i = 0; i < SIZE; i++)
    {
        // if EVEN it adds 1 to even counter
        if (num_array[i] % 2 == 0)
        {
            total_even = total_even + 1;
            printf("The number %d is even\n", num_array[i]);

        } // end if
        else
        {
            printf("The number %d is odd\n", num_array[i]);
        } // end else
    } // end for

    // returns the total amount of even numbers to the main()
    return total_even;
} // end evenCounter()
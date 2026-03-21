/*
    A program that uses a function to find the HIGHEST number in an array
    containing FIVE numbers.
    In the main(), ask the user to enter 5 nums and stores these in the array
    Pass the array to the function that finds the highest num
    return value to main() & displays it

    27/02/2026

    Nadyla Barbosa
*/

#include <stdio.h>

#define SIZE 5

int find_highest(int[]);

int main()
{
    int values[SIZE];
    int i;

    printf("\nEnter %d numbers: \n", SIZE);

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", & values[i]);
    }// end for

    find_highest(values);

    printf("\nThe highest number is: %d", find_highest(values));

    return 0;
}// end main()

int find_highest(int nums[])
{
    int i;
    int highest = nums[i];

    for (i = 0; i < SIZE; i++)
    {
        if(nums[i] > highest)
        {
            highest = nums[i];
        }// end if
    }// end for

    return(highest);
}// end find_highest()
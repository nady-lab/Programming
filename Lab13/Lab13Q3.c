/*
    A program that uses a function to find the AVERAGE of the numbers in an array
    containing FIVE numbers.
    In the main(), ask the user to enter 5 nums and stores these in the array
    Pass the array to the function that finds the average and
    return value to main() & displays it

    27/02/2026

    Nadyla Barbosa
*/

#include <stdio.h>

#define SIZE 5

int find_average(int []);

int main()
{
    int values[SIZE];
    int average;
    int i;

    printf("\nPlese enter %d nums and we'll calculate the average: \n", SIZE);
    
    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", & values[i]);
    }// end for

    average = find_average(values);

    printf("\nThe average of the numbers is: %d\n", average);

    return 0;
}// end main()

int find_average(int nums[])
{
    int i;
    int sum;
    int average;

    for(i = 0; i < SIZE; i++)
    {
        sum = sum + nums[i];
    }// end for

    average = sum / SIZE;

    return(average);
}// end function find_average()
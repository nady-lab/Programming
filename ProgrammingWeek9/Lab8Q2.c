/*
    Write a program that uses a 3x2 (2-D) array. Your program must do the following:
    a) Enter values into the array.
    b) Display the values in the array to standard output.
    c) Find the smallest & largest value and display both to standard output.
    d) Calculate the average of the values and display to standard output.

    Nadyla Da Cunha Barbosa

    11/11/2025
*/

#include <stdio.h>

#define ROWS 3
#define COLS 2

int main () {
    // Declare a 3x2 array
    int arr[ROWS][COLS];
    
    // Variables for loops 
    int smallest;
    int largest;
    int i, j = 0;
    
    // Variables for smallest, largest, sum, and average
    smallest = largest = arr[0][0];
    int sum = 0;
    float average;

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            // Initialize smallest and largest with the first element

            printf("Enter value for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);

            // Update sum
            sum = sum + arr[i][j];

            // Update smallest and largest
            if (smallest > arr[i][j])
            {
                smallest = arr[i][j];
            }

            if (largest < arr[i][j])
            {
                largest = arr[i][j];
            }
        }
    }

    // Display the values in the array
    printf("\nThe values in the array are:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            // Print each element
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Display smallest and largest values
    printf("\nSmallest value: %d\n", smallest);
    printf("Largest value: %d\n", largest); 

    // Calculate and display average
    average = (float)sum / (ROWS * COLS);

    printf("Average value: %0.2f\n", average);

    return 0;
}

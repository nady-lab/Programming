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
    int arr[ROWS][COLS] = {0};
    
    int i = 0;
    int j = 0;
    
    int smallest;
    int largest;
    
    int sum = 0;
    float average = 0.0;

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            smallest = largest = arr[0][0]; // Initialize smallest and largest with the first element
            printf("Enter value for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);

            sum += arr[i][j];

            if (arr[i][j] > largest)
            {
                largest = arr[i][j];
            }
            if (arr[i][j] < smallest)
            {
                smallest = arr[i][j];
            }
        }
    }

    printf("\nThe values in the array are:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLS; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nSmallest value: %d\n", smallest);
    printf("Largest value: %d\n", largest); 
    average = sum / (float)(ROWS * COLS);
    printf("Average value: %.2f\n", average);

    return 0;
}
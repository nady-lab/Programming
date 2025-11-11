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
    int arr[3][2] = {0};
    int smallest = arr[0][0];
    int largest = arr[0][0];
    
    int i = 0;
    int j = 0;
        
    int sum = 0;
    float average = 0.0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter value for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }//inner for
    }//outer for

    printf("\nThe values in the array are:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }//inner for
        printf("\n");
    }//outer for    

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (arr[i][j] < smallest)
                smallest = arr[i][j];
            if (arr[i][j] > largest)
                largest = arr[i][j];
        }
    }

    return 0;
}
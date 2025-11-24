/*
    A program that uses a 3x2 array. Your program must do the following:
    
    a) Enter in values for each element in the array.
    b) Calculate and display the sum of row 0, row 1, and row 2 separately.
    c) Calculate and display the sum of column 0 and column 1 separately.
    d) Find the highest number in the array and display it

    Nadyla Da Cunha Barbosa
*/

#include <stdio.h>
#define ROWS 3
#define COLUMNS 2

int main() {
    int arr1[ROWS][COLUMNS];
    int highest = arr1[0][0];
    int i, j;
    int row_sum;
    int column_sum;

    //enters values for each element of the array
    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLUMNS; j++)
        {
            printf("Enter the value for [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n");

    for(i = 0; i < ROWS; i++)
    {
        row_sum = 0;

        for(j = 0; j < COLUMNS; j++)
        {
            row_sum += arr1[i][j];
        }

        printf("The sum of row %d = %d\n", i, row_sum);
    }

    printf("\n");

    for(j = 0; j < COLUMNS; j++)
    {
        column_sum = 0;

        for(i = 0; i < ROWS; i++)
        {
            column_sum += arr1[i][j];
        }
        
        printf("The sum of column %d = %d\n", j, column_sum);
    }

    printf("\n");


    for(i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLUMNS; j++)
        {
            if(arr1[i][j] > highest)
            {
                highest = arr1[i][j];
            }
        }
    }
    
    printf("The highest value is %d.\n", highest);


    return 0;
}

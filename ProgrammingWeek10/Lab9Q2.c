/*
    Complete the following program so that it computes the sum of all the elements in the 
    array.

    Nádyla Barbosa

    18/11/2025
*/

#include <stdio.h>
#define ROWS 4
#define COLUMNS 6

int main() {
    
    int data[ROWS][COLUMNS] = { 3, 2, 5, 7, 4, 2,
                                1, 4, 4, 8, 13, 1,
                                9, 1, 0, 2, 0 , 0,
                                0, 2, 6, 3, -1, -8 
                              };
    // declare the sum variable here
    int i, j;
    int sum = 0;

    // compute the sum of the data in the array
    for ( i = 0; i < ROWS; i++)
    {
        for ( j = 0; j < COLUMNS; j++)
        {
            // calculate the sum here
            sum += data[i][j];

        }//end inner for loop

    }//end outer for loop 

    printf("%d", sum);
    
    return 0;
}
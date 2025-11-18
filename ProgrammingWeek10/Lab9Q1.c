/*
    Show how to initialise two 3x4 integer arrays (2-Dimensional arrays with 3 rows and
    4 columns in each). Initialise both arrays with any random integer values.

    declare a 3 rd 3x4 array. Multiply each corresponding element in the
    1st and 2 nd array and store this result in the corresponding element of the 3 rd array. For 
    example, array3[0][0] = array1[0][0] x array2[0][0], array3[0][1] = array1[0][1] x 
    array2[0][1], etc..


    Nádyla da Cunha Barbosa

    18/11/2025

*/

#include <stdio.h>
#define ROWS 3
#define COLUMNS 4

int main() {

    //initialise TWO 3x4 integer arrays with random ints
    int arr1[ROWS][COLUMNS] = { 89, 45, 6,
                                8, 78, 7,
                                11, 85, 2,
                                5, 23, 5 };

    int arr2[ROWS][COLUMNS] = { 64, 8, 4,
                                -8, 25, -45,
                                65, 5, 1,
                                67, 41, 1 };
    
    //array to store the product of arrays
    int arr3[ROWS][COLUMNS] = {};
    
    //declare variables to use in the for loops
    int i, j;

    for(i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            arr3[i][j] = arr1[i][j] * arr2[i][j];

        }//end of loop j
        
    }//end of loop i

    //printing of arr1
    printf("\nThe array 1 is:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            // Print each element of arr1
            printf("%d ", arr1[i][j]);

        }//end of inner loop

        printf("\n");
    }//end of outer loop

    //printing of arr2
    printf("\nThe array 2 is: \n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            // Print each element of arr2
            printf("%d ", arr2[i][j]);

        }//end of inner loop

        printf("\n");
    }//end of outer loop

    //printing of arr3 (product of arr1 & arr2)
    printf("\nThe product of arrays 1 & 2 is:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            // Print each element of arr3
            printf("%d ", arr3[i][j]);

        }//end of inner loop

        printf("\n");
    }//end of outer loop
    

    return 0;
}
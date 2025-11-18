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
    int arr1[ROWS][COLUMNS] = { 89, 45, 711,
                                4512, 78, 457,
                                741, 85, 2,
                                789, 654, 321 };

    int arr2[ROWS][COLUMNS] = { 64, 585, 895262,
                                7893, 4529, 73562,
                                1264, 39847, 943,
                                947, 3648, 1 };
    
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


    printf("\nThe product of arrays 1 & 2 is:\n");
    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            // Print each element of arr3
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
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

    //how to initialise TWO 3x4 integer arrays
    int arr1[ROWS][COLUMNS] = { 89, 45, 711,
                                4512, 78, 457,
                                741, 85, 2,
                                789, 654, 321};

    int arr2[ROWS][COLUMNS] = { 64, 5
        
    int arr3[ROWS][COLUMNS] = {};

    int i, j;

    for(i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            arr3[i][j] = arr1[i][j] * arr2[i][j];
        }
        
    }

    for (i = 0; i < ROWS; i++)
    {
        for (j = 0; j < COLUMNS; j++)
        {
            printf("%d x %d = %d\n", arr1[i][j], arr2[i][j], arr3[i][j]);
        }
    }
    

    return 0;
}
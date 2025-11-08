/*
    a program that defines an integer array with 5 elements:
    first it must enter the 5 ints into the array and then,
    define another integer array with 5 elements and copy the
    values from the 1st array into the 2nd array in reverse order.

    Nádyla Da Cunha Barbosa

    04/11/2025
*/
#include <stdio.h>
//symbolic name
#define ARRAY_SIZE 5

int main() {
    //assigning and initializing the array
    int array1[ARRAY_SIZE] = {0};
    int array2[ARRAY_SIZE] = {0};
    //declaring variable i for the for loop
    int i = 0;


    //while i is not equal to the array size, the user will be asked to input a value
    //this value will be stored as an element in the array one by one
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("Enter a int: ");
        scanf("%d", &array1[i]);
    }// end for 
    
    printf("Original array is: ");
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d", array1[i]);
    }//end for


    //this for loop will store the prior array in reverse order by
    // taking the size of the set array (5), taking away 1 and i
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        array2[i] = array1[ARRAY_SIZE - 1 - i];
    }//end for

    printf("\nThe elements of the new array are: ");

    //this for loop will print each element of the new array
    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d", array2[i]);
    }//end for

    return 0;
}
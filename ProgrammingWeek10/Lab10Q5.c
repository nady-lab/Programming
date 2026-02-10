/*
    Using POINTER NOTATION ONLY, write a program that:
    a) Uses 2 floating point 1D arrays with 3 elements each.
    b) Enter values into the first array.
    c) Copy the values from the first array into the second array.
    d) Print the values from both arrays.   

    Nadyla da Cunha Barbosa

    02/12/2025 (DD/MM/YYYY)
*/

#include <stdio.h>

//size of arrays
#define SIZE 3

int main() {
    float arr1[SIZE] = {0};
    float arr2[SIZE] = {0};
    int i;

    // for loop that let's the user enter values into the 1st array
    for(i = 0; i < SIZE; i++)
    {
        printf("Enter the values of arr1 element %d: ", i);
        scanf("%f", & *(arr1 + i));

        //copies the values from array 1 into array 2
        *(arr2 + i) = *(arr1 + i);

    } //end for loop

    printf("\n");

    //prints the values of array 1
    printf("Arr1 is equal to:\t");
    for (i = 0; i < SIZE; i++)
    {
        printf("%0.2f\t", *(arr1 + i));

    } //end for loop

    //prints the values of array 2
    printf("\nArr2 is equal to:\t");
    for (i = 0; i < SIZE; i++)
    {
        printf("%0.2f\t", *(arr2 + i));

    } //end for loop

    printf("\n\n");

    return 0;
}
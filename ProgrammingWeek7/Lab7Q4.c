/*
    Define an integer array with 4 elements. Write a program that will allow the user to
    * display the content of the array to the screen in the same order they were entered.
    * swap the (first) and the (second) num && the (third) and the (fourth) num and display it.
    
    Nádyla Da Cunha Barbosa

    04/11/2025
*/

#include <stdio.h>
#define ARRAY_SIZE 4

int main() {
    int nums1[ARRAY_SIZE];
    int nums2[ARRAY_SIZE];
    int i;

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("Enter a int: ");
        scanf("%d", &nums1[i]);

    }// end for 

    printf("Array entered:\n");
    for(i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d\n", nums1[i]);
    }

    /*
    nums2[1] = nums1[0];
    nums2[0] = nums1[1];
    nums2[3] = nums1[2];
    nums2[2] = nums1[3];
    */

    
    //Swapping each pair in a loop
    for (i = 0; i < ARRAY_SIZE; i += 2) 
    {
        nums2[i] = nums1[i + 1]; // swap first of the pair
        nums2[i + 1] = nums1[i]; // swap second of the pair
    }
    

    printf("New array: \n");
    for(i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d\n", nums2[i]);
    }

    return 0;
}
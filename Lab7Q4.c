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
    int nums1[ARRAY_SIZE] = {0};
    int nums2[ARRAY_SIZE] = {0};
    int i = 0;

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("Enter a int: ");
        scanf("%d", &nums1[i]);
    }// end for 

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%d\n", nums1[i]);
    }// end for 

    for (i = 0; i < ARRAY_SIZE; i++)
    {
        
    }

    return 0;
}
/*
    Write a program that uses an array to enter 5 integer numbers. Copy the contents of
    this array into another array using only a loop.

    Nadyla Da Cunha Barbosa

    20/11/2025
*/

#include <stdio.h>
#define SIZE 5

int main() {
    int arr1[SIZE] = {1,2,3,4,5};
    int arr2[SIZE];
    int i = 0;

    for (i = 0; i < SIZE; i++)
    {
        arr2[SIZE - 1 - i] = arr1[i];
    }
    
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", arr2[i]);
    }
    
    printf("\n");
    
    return 0;
}
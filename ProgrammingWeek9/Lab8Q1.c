/*
    Lab 8 - Question 1

    Assuming an integer array called ‘arr’ with 10 elements, what is in arr[8] after the
    following code is executed?

    for (i = 0; i < 10; i++)
    {
    arr[i] = 9 - i;
    }
    // Display the contents of arr[8]
    for (i = 0; i < 10; i++)
    {
    arr[i] = arr[ arr[i] ];
    }
    // Display the contents of arr[8]

    Nadyla Da Cunha Barbosa

    11/11/2025
*/

#include <stdio.h>
#define SIZE 10

int main () {
    int arr[SIZE];
    int i;

    // First loop to initialize the array
    for (i = 0; i < SIZE; i++)
    {
        arr[i] = 9 - i;
    }

    // Display the contents of arr[8] after first loop
    printf("Value of arr[8] after first loop: %d\n", arr[8]);

    // Second loop to modify the array
    for (i = 0; i < SIZE; i++)
    {
        arr[i] = arr[arr[i]];
    }

    // Display the contents of arr[8] after second loop
    printf("Value of arr[8] after second loop: %d\n", arr[8]);

    return 0;
}
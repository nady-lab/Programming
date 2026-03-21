/*
    Program to read 15 numbers and:
    a) display each number on a separate line.
    b) on one line, each number separated by a space.
    c) as in b) but in reverse order.

    Nadyla Da Cunha Barbosa

    11/11/2025
*/

#include <stdio.h>
#define ROWS 3
#define COLS 5

int main() {
    int arr[ROWS][COLS];
    int i, j;

    // Read 15 numbers into the array
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++)
        {
            printf("Enter number for arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // a) Display each number on a separate line
    printf("\nNumbers on separate lines:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d\n", arr[i][j]);
        }
    }

    // b) Display numbers on one line separated by spaces
    printf("\nNumbers on one line separated by spaces:\n");
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");

    // c) Display numbers in reverse order on one line separated by spaces
    printf("\nNumbers in reverse order on one line separated by spaces:\n");
    for (i = ROWS - 1; i >= 0; i--) {
        for (j = COLS - 1; j >= 0; j--) {
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");

    return 0;
}
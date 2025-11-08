/*
    Program that uses an array to enter 5 integer numbers. Copy the contents of 
    this array into another array using only a loop.

    Nádyla Da Cunha Barbosa

    04/11/2025
*/
#include <stdio.h>
#define NUM 5

int main() {
    int numbers[NUM] = {0};
    int copy[NUM] = {0};
    int i = 0;

    for (i = 0; i < NUM; i++)
    {
        printf("Enter an int num: ");
        scanf("%d", &numbers[i]); 
    }
    
    for (i = 0; i < NUM; i++) 
    {
        copy[i] = numbers[i];
        printf("%d", copy[i]);
    }

    return 0;
}



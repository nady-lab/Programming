/*
    a program that asks the user to enter a number between 1 - 5. Your program 
    should display all the numbers between 1 - 20 that are evenly divisible by this
    number. You will need to use a loop.

    Nadyla da Cunha Barbosa

    20/11/2025
*/

#include <stdio.h>
#define SIZE 20

int main() {
    int num_user;
    int num[SIZE];
    int i;

    for(i = 0; i < SIZE; i++)
    {
        num[i] = i + 1;
    }

    printf("Enter a num between 1 & 5:\n");
    scanf("%d", &num_user);
    printf("\n");

    for ( i = 0; i < SIZE; i++)
    {
        if (num[i] % num_user == 0)
        {
            printf("%d\n", num[i]);
        }
        
    }

    return 0;
}
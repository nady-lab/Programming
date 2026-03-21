/*
    A program that uses a function to check for the highest value of 3 numbers. 
    Your function should find the highest of these numbers and return it back to main().
    Your main() should then display this highest number. 

    Nadyla da Cunha Barbosa

    10/02/2026
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

int highestNum(int, int, int);

int main()
{
    int n1, n2, n3;
    int highest;

    printf("\nPlease enter %d numbers and I'll let you know the highest: \n", SIZE);
    scanf("%d", & n1);
    scanf("%d", & n2);
    scanf("%d", & n3);

    highest = highestNum(n1, n2, n3);

    printf("\nThe highest number is: %d\n", highest);
    return 0;
}

int highestNum(int num1, int num2, int num3)
{
    int highest = num1;
    
    if(num2 > highest)
    {
        highest = num2;
    }
    if(num3 > highest)
    {
        highest = num3;
    }

    return(highest);
}
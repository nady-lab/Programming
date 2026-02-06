/*
    A program that uses a function to find the HIGHEST & L0WEST number of 3 values.

    These 3 values must be passed as parameters to the function.

    Nadyla da Cunha Barbosa

    06/02/2026
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

void lowerHigher(int, int, int);

int main()
{
    int a, b, c;

    printf("\nPlease enter three numbers: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    lowerHigher(a, b, c);

    return 0;
}

void lowerHigher(int n1, int n2, int n3)
{
    int highest = n1;
    int lowest = n1;

    if (n2 > highest)
    {
        highest = n2;
    } // end if
    if (n2 < lowest)
    {
        lowest = n2;
    } // end if

    if (n3 > highest)
    {
        highest = n3;
    } // end if
    if (n3 < lowest)
    {
        lowest = n3;
    } // end if

    printf("\nThe highest value is %d\n", highest);
    printf("\nThe lowest value is %d\n\n", lowest);
}
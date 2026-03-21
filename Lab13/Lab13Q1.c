/*
    PASSING BY REFERENCE.
    A program that uses 2 functions.
        1) to calculate the area of a square (side * side)
        2) to calculate the area of a circle (pi * radius^2)

    17/02/2026

    Nadyla da Cunha Barbosa
*/

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

void areaSquare(int *);
void areaCircle(int *);

int main()
{
    int side = 0;
    int radius = 0;

    printf("\nEnter the value of one of the sides of the square: \n");
    scanf("%d", & side);

    areaSquare(&side);

    printf("\nEnter the value of the radius of the circle: \n");
    scanf("%d", & radius);

    areaCircle(&radius);

    return 0;
}// end main()

void areaSquare(int *side)
{
    int totalArea_square = (*side) * (*side);

    printf("\nThe area of the square is equal to: %d\n", totalArea_square);
}// end areaSquare

void areaCircle(int *radius)
{
    float totalArea_circle =  PI * ((*radius) * (*radius));

    printf("\nThe area of the circle is equal to: %.2f\n", totalArea_circle);;
}// end areaCircle


/*
    RETURNING A VALUE FROM A FUNCTION
    
    A program that uses a function to calculate the average of 3 numbers.
    The main() should ASK the user to enter these 3 numbers and the should
        be passed to the function parameters.
    The function should calculate the average and return this value to the main().
    Your main() should then display this average value.

    Nadyla da Cunha Barbosa

    10/02/2026
*/

#include <stdio.h>

#define SIZE 3

// function that calculates the average of 3 numbers
float average(int *, int *, int *);

int main()
{
    int n1, n2, n3;
    float aver = 0;
    
    printf("\nPlease enter %d numbers: \n", SIZE);
    scanf("%d", & n1);
    scanf("%d", & n2);
    scanf("%d", & n3);

    aver = average(&n1, &n2, &n3);

    printf("\nThe average of %d, %d & %d is: %.2f\n\n", n1, n2, n3, aver);

    return 0;
}// end main()

float average(int *num1, int *num2, int *num3)
{
    int average;
    
    average = (*num1 + *num2 + *num3) / SIZE;

    return(average);
}

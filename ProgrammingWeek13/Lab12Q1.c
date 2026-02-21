/*
    RETURNING A VALUE FROM A FUCNTION

    Write a program that uses a function to check if a number is even or odd.
    The main() should allow the user to enter ANY number and this should be passed to the function.

    The function should check if the num is even or odd and RETURN 1 if EVEN && RETURN 0 if ODD.
    The main() should then indicate the result.

    Nadyla B

    10/02/2026
*/

#include <stdio.h>

//function that checks if num is even or odd
int EvenOdd(int *);

int main() {
    int num = 0;
    
    printf("\nEnter a integer: ");
    scanf("%d", & num);

    printf("\n0 = ODD\t1 = EVEN\n\n");
    printf("RESULT = %d\n\n", EvenOdd(& num));

    return 0;
}// end main()

// checks if number entered is odd or even 
int EvenOdd(int *n) 
{
    if (*n % 2 == 0)
    {
        return 1;
    }// end if
    else
    {
        return 0;
    }// end else
}// end EvenOdd()

/*
    PASS BY REFERENCE. 
    Write a program similar to Q4 above but this time use Pass by
    Reference to modify the integer variable declared in main().

    Nadyla da Cunha Barbosa

    10/02/2026
*/

#include <stdio.h>

// pass function by REFERENCE
void function1(int *);

int main() {
    int num = 1;

    // display variable num before going through the function1
    printf("\nBefore function: %d\n", num);

    // gets the ADDRESS of the parameter and sends it to the function
    function1(&num);

    // display variable num after going through the function1
    printf("\nAfter function: %d\n\n", num);

    return 0;
}// end main()

// gets the ADDRESS of the parameter and CHANGES the content
void function1(int *n) 
{
    // adds 2 to the contents of parameter
    *n += 2;

    // displays the paramenter after addition
    printf("\nInside function: %d\n", *n);

}// end function1()
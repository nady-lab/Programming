/*
    Modify your program (Q1) above to do the following:

    a) Declare a third pointer ptr3 that points to an integer. Initialise this to point to
    char1. Does this compile? If not, why?

    b) Using the dereference operator, display the contents of the address stored in ptr3
    with %d and %c. Is there a difference? If yes, explain what this difference is
    (include as a comment in your code).

    Nadyla da Cunha Barbosa

    18/01/2026
*/

#include <stdio.h>

int main() {
    // declare num1, char1, ptr1 and ptr2
    int num1;
    char char1;
    int *ptr1;
    char *ptr2;

    //declare a third pointer that points to an int
    int *ptr3;

    //initialise ptr to point to char1
    // it compiles with a warning. because unless you don't cast &char1 to be an int, C doesn't allow this.
    ptr3 = &char1; 

    // assign num1 an int, char1 a char
    //make ptr1 point to num1 and ptr2 to char1
    num1 = 0;
    char1 = 'A';
    ptr1 = &num1;
    ptr2 = &char1;

    //display the contents AND address of num1 and char1 (on separate lines)
    printf("\nnum1 contains: %d at the address: %p.", num1, &num1);
    printf("\nchar1 contains: %c at the address: %p.\n", char1, &char1);

    //display the contents of ptr1 and ptr2
    printf("\nptr1 contains: %p.", ptr1);
    printf("\nptr2 contains: %p.\n", ptr2);

    //display the contents of the addresses stored in ptr1 and ptr2
    printf("\nthe contents of ptr1 adress is: %d", *ptr1);
    printf("\nthe contents of ptr2 adress is: %c\n", *ptr2);

    // display the contents of the address stored in ptr3 with %d and %c (USING THE DEREFERENCE OPERATOR)
    // is there a difference? -> YES
    /*
        why? 
        -> because the same mem. location is read but 
        the format specifier determines how the value is intepreted.

        %d prints the int value of the ascii code stored in char1.
        %c prints the character corresponding to the ascii value.

    */
    printf("\nthe contents of the address stored in ptr3 is: %d", *ptr3);
    printf("\nthe contents of the address stored in ptr3 is: %c\n", *ptr3);

    //Do ptr1 and ptr2 have address locations? -> YES
    printf("\nthe address of ptr1 is: %p", &ptr1);
    printf("\nthe address of ptr2 is: %p\n", &ptr2);

    return 0;
}
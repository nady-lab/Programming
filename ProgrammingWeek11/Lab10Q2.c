/*
    Modify your program (Q1) above to do the following:

    a) Declare a third pointer ptr3 that points to an integer. Initialise this to point to
    char1. Does this compile? If not, why?

    b) Using the dereference operator, display the contents of the address stored in ptr3
    with %d and %c. Is there a difference? If yes, explain what this difference is
    (include as a comment in your code).

    Nadyla da Cunha Barbosa

    2/12/2025

*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1;
    char char1;
    int *ptr1;
    char *ptr2;
    int *ptr3;

    num1 = 1;
    char1 = 'n';


    ptr1 = &num1;
    ptr2 = &char1;

    //ptr3 pointing at char1
    /*
        Yes, it compiles... BUT it's unsafe. 
        C lets you assign a char* to an int* because it's "weakly typed", 
        but dereferencing ptr3 will interpret 1 byte of char data as 4 bytes of int data, 
        causing garbage values.
    */
    ptr3 = &char1;

    //display the contents and address of num1 and char1 (on separate lines).
    printf("\nnum1 contains: %d, located at address: %p\n", num1, &num1);
    printf("char1 contains: %c, located at address: %p\n\n", char1, &char1);

    //dereference operator displays the contents of the addresses stored in ptr1 and ptr2.
    printf("\nnum1 contains: %d, located at address: %p\n", *ptr1, ptr1);
    printf("char1 contains: %c, located at address: %p\n\n", *ptr2, ptr2);

    //display the contents of ptr3 -> 
    //DIFFERENCE: with %d, it says that *ptr3 contains 366, but the address is the same
    /*
        %d interprets the memory as an int (usually 4 bytes),
        but the data stored at char1 is only 1 byte.
        So %d prints a random integer based on whatever bytes happen to be in memory.
        %c prints the actual character stored in that 1 byte.
    */
    printf("char1 contains: %d, located at address: %p\n", *ptr3, ptr3);
    printf("char1 contains: %c, located at address: %p\n\n", *ptr3, ptr3);


    return 0;
}
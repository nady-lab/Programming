/*
    Write a program declaring an integer (num1), a character (char1) and 2 pointers (ptr1
    that points to an integer and ptr2 that points to a character).
    Initialise num1 and char1 to contain an integer and character. Initialise ptr1 to point to
    num1 and initialise ptr2 to point to char1. Your program should do the following:
    
    a) Display to standard output the contents and address of num1 and char1 (on separate lines).

    b) Display the contents of ptr1 and ptr2. 
    (The output should be the same as the addresses of num1 and char1 above).
    
    c) Using the dereference operator, display the contents of the addresses stored in ptr1 and ptr2.


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


    //Do ptr1 and ptr2 have address locations? -> YES
    printf("\nthe address of ptr1 is: %p", &ptr1);
    printf("\nthe address of ptr2 is: %p\n", &ptr2);

    return 0;
}
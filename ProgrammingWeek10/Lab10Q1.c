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

    2/12/2025
*/

#include <stdio.h>

int main() {

    int num1;
    char char1;
    int *ptr1;
    char *ptr2;

    num1 = 1;
    char1 = 'n';

    ptr1 = &num1;
    ptr2 = &char1;

    //display the contents and address of num1 and char1 (on separate lines).
    printf("\nnum1 contains: %d, located at address: %p\n", num1, &num1);
    printf("char1 contains: %c, located at address: %p\n\n", char1, &char1);

    //dereference operator displays the contents of the addresses stored in ptr1 and ptr2.
    printf("\nnum1 contains: %d, located at address: %p\n", *ptr1, ptr1);
    printf("char1 contains: %c, located at address: %p\n\n", *ptr2, ptr2);

    return 0;
}
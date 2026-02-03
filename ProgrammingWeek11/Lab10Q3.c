/*
    Write a program that uses two float variables called input1 and input2. Enter values
    for these variables. Using pointers (called ptr1 and ptr2), your program should do the
    following:

    a) Display to standard output the address of input1 and input2 (on separate lines).

    b) Display the address of ptr1 and ptr2 (on separate lines) - Remember, even though 
    these are pointers, they are still variables. Therefore, each will also have their
    own address in memory (RAM).
    
    c) Make ptr1 and ptr2 point to input1 and input2 respectively. Display the contents
    of ptr1 and ptr2. (The output should be the same as the addresses of input1 and 
    input2 above).
    
    d) Using the dereference operator, display the contents of the address stored in
    ptr1 and ptr2.


    Nadyla da Cunha Barbosa

    2/12/2025
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    float input1;
    float input2;
    float *ptr1;
    float *ptr2;

    input1 = 23.45;
    input2 = 34.852;

    // (c) Pointers now pointing to input1 and input2
    ptr1 = &input1;
    ptr2 = &input2;

    // (a) Addresses of input1 and input2
    printf("The address of input1 is: %p\n", &input1);
    printf("The address of input2 is: %p\n\n", &input2);
 
    // (b) Addresses of ptr1 and ptr2
    printf("The contents of input1 is: %f\n", *ptr1);
    printf("The contents of input2 is: %f\n\n", *ptr2);

    // Display contents of ptr1 and ptr2 (the addresses they store)
    printf("ptr1 contains (points to): %f\n", *ptr1);
    printf("ptr2 contains (points to): %f\n\n", *ptr2);

    // (d) Dereference ptr1 and ptr2
    printf("The address of ptr1 is: %p\n", &ptr1);
    printf("The address of ptr2 is: %p\n\n", &ptr2);

    return 0;
}
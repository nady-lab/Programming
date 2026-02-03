/*
    Write a program that uses a function to print 10 stars (*) on a single line. Ensure you
    declare your function prototype and include adequate comments.
*/

#include <stdio.h>

#define SIZE 10

int stars(int);

int main() {
    int no_stars = SIZE;

    stars(no_stars);

    printf("\n\nPrinted stars...\n");
}// end main()

int stars(int num) {
    int i = 0;

    for (i = 0; i < num; i++)
    {
        printf("*");
    }// end for 

}// end stars()

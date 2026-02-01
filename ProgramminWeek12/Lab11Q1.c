/*
    USING POINTER NOTATION
    PT.1 -> write a program that replaces all the blank elements in a char array with the 
    underline char "_"

    PT. 2 -> from given arrays write a program to calculate 
    and display the value of each element of mp1

    Nadyla da Cunha Barbosa

    27/01/2026
*/


//PART 1
/*#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main() {
    char chars[] = {'a', ' ', 'b', ' ', 'c'};
    char *ptr = chars;
    int i;

    for(i = 0; i < SIZE; i++)
    {
        if (*(ptr + i) == ' ')
        {
            *(ptr + i) = '_';
        } // end if
        
        printf("%c", *(ptr + i));
    }// end for

    printf("\n");

    return 0;
}*/

//PART 2
/*#include <stdlib.h>
#include <stdio.h>

#define SIZE 5

int main() {
    float litres[] = { 11.55, 11.21, 12.7, 12.6, 12.4 };
    float miles[] = { 471.5, 358.72, 495.3, 453.6, 421.6 };
    int mp1[SIZE]; // miles per litre
    int i;

    float *ptr_lit = litres;
    float *ptr_mil = miles;
    int *ptr_mp1 = mp1;

    // calculate and assign miles per litre
    for (i = 0; i < SIZE; i++)
    {
        *(ptr_mp1 + i) = *(ptr_mil + i) / *(ptr_lit + i);

        printf("%d \n", *(ptr_mp1 + i));
    }// end for

    return 0;

}// end main
*/
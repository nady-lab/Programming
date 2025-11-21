/*
    a program to find the sum of all the odd ints
    in the range 1 to 99

    Nadyla da Cunha Barbosa

    21/11/2025
*/

#include <stdio.h>

int main() {
    int odd;
    int sum;
    int i;

    sum = 0;
    
    for(i = 0; i < 99; i++)
    {
        odd = i + 1;

        if(odd % 2 != 0)
        {
            sum = sum + odd;
        }
    }

    printf("%d", sum);

    return 0;
}
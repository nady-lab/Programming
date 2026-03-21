/*
    Using a loop, display all the even numbers from 1 - 100, separated by commas

    Nadyla da Cunha Barbosa

    21/11/2025
*/

#include <stdio.h>

int main() {
    int nums;
    int i;

    for(i = 0; i < 100; i++)
    {
        nums = i + 1;
        
        if(nums % 2 == 0 & nums != 100)
        {
            printf("%d, ", nums);
        }
        if(nums == 100)
        {
            printf("%d\n", nums);
        }
    }

    return 0;
}
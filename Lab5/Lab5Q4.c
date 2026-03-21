/*
    a program that counts from one to ten, prints the values on a separate line for 
    each, and prints a message stating, "This number is three" and "This number is seven" 
    when the count is 3 and when the count is 7 respectivel

    Nadyla da Cunha Barbosa

    21/11/2025
*/

#include <stdio.h>

int main() {
    int nums;
    int i;

    for(i = 0; i < 10; i++)
    {
        nums = i + 1;
        printf("%d\n", nums);

        if(nums == 3)
        {
            printf("This is number three.\n");
        }
        else if (nums == 7)
        {
            printf("This is number seven.\n");
        }
        
    }

    return 0;
}
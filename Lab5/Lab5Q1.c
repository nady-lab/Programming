/*
    a program using a while loop to display the numbers 1 - 10 in descending order
    on the same line and each number separated by a comma e.g., 10,9,8,7,6,5,4,3,2,1

    Note: do not display the comma after the last number
*/

#include <stdio.h>
#define SIZE 10

int main() {
    int nums1[SIZE] = {1,2,3,4,5,6,7,8,9,10};
    int nums2[SIZE];
    int i;

    for(i = 0; i < (SIZE); i++)
    {
        nums2[SIZE - 1 - i] = nums1[i];
    }

    for (i = 0; i < (SIZE - 1); i++)
    {
        printf("%d, ", nums2[i]);
    }
    
    printf("%d\n", nums2[SIZE - 1]);

    return 0;
}
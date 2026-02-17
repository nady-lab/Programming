/*
    Make a copy of Q2 above but this time, use your function to
    change the contents of the array, i.e. MULTIPLY each number in the array by 2.
    When your function has finished and your program execution returns to the main(), display
    the contents of your array in your main() and see if the changes made to the contents
    of the array in your function can be seen. If not, why?
*/

#include <stdio.h>

#define SIZE 5

int arr_double(int[]);

int main()
{
    int values[SIZE];
    int i;

    printf("\nEnter %d numbers: \n", SIZE);

    for(i = 0; i < SIZE; i++)
    {
        scanf("%d", & values[i]);
    }// end for

    arr_double(values);

    printf("\n");
    for(i = 0; i < SIZE; i++)
    {
        printf("%d\n", values[i]);
    }
    printf("\n");

    return 0;
}// end main()

int arr_double(int nums[])
{
    int arr2[SIZE];
    int i;

    for (i = 0; i < SIZE; i++)
    {
        arr2[i] = nums[i] * 2;
    }// end for

    printf("\n"); 
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\n", arr2[i]);
    }// end for

    return(arr2);
}// end find_highest()
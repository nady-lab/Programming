/*
    Write a program that replaces all the blank elements in a
    character array with underscore (_) characters.
    Use a pointer rather than a subscript to access the elements of the array.

    char chars[] = { 'a', 'b', ' ', 'd', ' ', 'f', 'g', ' ', 'i'};

    Nádyla da Cunha Barbosa

    27/01/2026
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variable to store the number of elements in the array
    int n;
    char *ptr1;
    int total_size_bytes;
    int i;

    // ask user the amount of elements needed.
    printf("\nHow many elements will you be entering: ");
    scanf("%d", &n);
    printf("\n");

    // calculate the total size in bytes needed
    total_size_bytes = (n) * sizeof(char);

    // allocate the block of memory required
    ptr1 = malloc(total_size_bytes);

    // check is malloc was successfull
    if (ptr1 == NULL)
    {
        // let user know it was unsuccessful
        printf("\nFailed to allocate memory block. Program ending...\n");

        // end program
        return 0;
    } // end if
    else
    {
        // memory alloocated successfullly, ready to use it
        printf("\nMemory allocated successfully.\n");

        printf("\nEnter the set of %d characters\n", n);

        // enter date items into the allocated memory block
        for (i = 0; i < n; i++)
        {
            scanf("%c", ptr1 + i);

        } // end for

        printf("\nResult: ");
        for (i = 0; i < n; i++)
        {
            if (*(ptr1 + i) = ' ')
            {
                printf("_");
            } // end if
            else
            {
                printf("%c", *(ptr1 + i));
            } // end else
        } // end for
        printf("\n");
    } // end else

    free(ptr1);
    return 0;
}
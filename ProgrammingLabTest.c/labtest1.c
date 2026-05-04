/*
    a program to implement the Fibonacci series: 
    (the sum of the current number and the previous number produce the next number)
    **the first two numbers in the sequence are always 0 & 1
    ** 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...


    1. ask the user for the numb of terms (max 15) to be calculated in the Fibonacci series.
    2. store the calculated Fibonacci sequence nth term in the array (n =  number of term entered in part 1)
    3. display all the numbers in the Fibonacci series to the nth term in the array to standard output
    4. program must continuously run and should only end when the user selects an option to end the program.

    Nádyla da Cunha Barbosa

    25/11/2025
*/

#include <stdio.h>
#define MAX 15

int main() {

    int menu;
    int i;
    int no_of_terms;
    int num1, num2, num3;
    int sequence[MAX];

    do
    {
        printf("\nWelcome to the Fibonacci series program\n\n");
        printf("Enter you selection:\n");
        printf("1.\tEnter the number of term to be calculated in the sequence and display\n");
        printf("2.\tEnd program\n\n");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:

            printf("Enter the number of terms to be calculated in the Fibonacci series (max no. is 15): ");
            scanf("%d", & no_of_terms);

            while (no_of_terms > MAX)
            {
                printf("Too many values, try again: ");
                scanf("%d", & no_of_terms);
            }

            if (no_of_terms <= MAX)
            {
                num1 = 0;
                num2 = 1;
                num3 = 0;

                sequence[0] = 0;
                sequence[1] = 1;


                for(i = 2; i < no_of_terms; i++)
                {

                    num3 = num1 + num2;
                    sequence[i] = num3;

                    num1 = num2;
                    num2 = num3;

                }
                printf("\n");

                printf("Fibonacci sequence: ");
                
                for(i = 0; i < no_of_terms; i++)
                {
                    printf("%d ", sequence[i]);
                }
                printf("\n");
            }

            break;
        
        case 2:

            printf("Program Ending...\n");

            break;

        default:

            printf("Invalid Choice.\n");

            break;
        }

    } while (menu != 2);

    return 0;
}
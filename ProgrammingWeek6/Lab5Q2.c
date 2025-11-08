/*
    a C program where the user enters a positive integer number,
    if the number is EVEN, halve it. If the number is ODD, multiply by 3
    and add 1.

    Nádyla Da Cunha Barbosa

    21/10/2025
*/

#include <stdio.h>

int main(){

    //assigned variables for the number the user inputs, and for the amount of steps it took to reach one.
    int number = 0;
    int steps = 0;

    //ask user for the input and store it inside number 
    printf("Enter a whole positive integer: ");
    scanf("%d", &number);

    //will run a loop asking the user for another input if the value is zero or a negative number
    while (number < 1)
    {
        printf("Error. Please try again: ");
        scanf("%d", &number);
    }
    
    //(i) Repeats this process until the number is 1, displaying the number value each time
    while (number != 1)
    {
        //checks if number is even
        if (number % 2 == 0)
        {
            //if number is even it will increase the amount of steps by 1
            steps += 1;
            //and halve the number
            number = number / 2;
        }
        //if number is odd
        else
        {
            //it will increase the amount of steps by 1
            steps += 1;
            //and multiply the number by 3 and add it 1
            number = (number * 3) + 1;
        }

        //will print the value of the new value of the variable number everytime the loop runs.
        if (number != 1)
        {
            printf("Next value is %d\n", number);
        }
    }
    //will print the final value aswell as the amount of steps it took to reach the final value.
    printf("Final value is %d. Number of steps were %d", number, steps);
    

    return 0;
}
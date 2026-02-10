/*
    A program that uses 2 functions called i) sum && ii) average
    Your program must ASK the user to enter 3 numbers inside the MAIN()

    Your MAIN() should then pass these 3 values as PARAMETERS ot the function SUM.
    This function should calculate the SUM of the 3 numbers.

    Your function SUM should then pass the sum of these 3 numbers as a parameter to the 
    function AVERAGE
    AVERAGE should then calculate the average of the 3 numbers and display it on screen.

    **Be careful where each function is called and how you pass your parameters between
    functions.


    Nadyla da Cunha Barbosa

    03/02/2026
*/

#include <stdio.h>

#define SIZE 3

int sum(int, int, int);
float average(int);

int main() {

    int n1, n2, n3;
    int total_sum;

    // asks the user for 3 numbers and stores them 
    printf("\nPlease enter the three numbers: \n");

    // NOT recommended using only one SCANF for better readability
    //scanf("%d %d %d", &n1, &n2, &n3);
    scanf("%d", & n1);
    scanf("%d", & n2);
    scanf("%d", & n3);

    // passes the 3 values that were inputed as parameters to the function sum()
    total_sum = sum(n1, n2, n3);

    // passes the sum of the 3 values as a parameter to the function average()
    average(total_sum); 

    return 0;
}// end main

//function SUM
int sum(int a, int b, int c) {
    // returns the sum of the values in the parameter
    int total;

    total = a + b + c;

    // returning an equation directly is not ideal -> better to do the equations beforehand and just return the values
    //return a + b + c;
    return total;
}// end function SUM

//function AVERAGE
float average(int sum) {
    float avg = 0;

    // turns the value entered in the parameter to a float and divides by the amount of numbers
    // calculates the average
    avg = (float)sum / SIZE;

    // displays the average on screen
    printf("\nThe average of your 3 numbers is: %.2f\n", avg);

    return avg;
}// end function AVERAGE
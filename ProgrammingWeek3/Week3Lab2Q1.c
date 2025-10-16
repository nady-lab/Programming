/*
    Description: Calculate and display the sum of the integers 1 to 5
    Calculate and display the average of the following 
    floating-point numbers: 1.0, 1.1, 1.2, ..... 2.0

    Date: 30/09/2025

    Author: Nádyla Barbosa
*/

#include <stdio.h>

int main() {

    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    int num4 = 4;
    int num5 = 5;
    int sum = num1 + num2 + num3 + num4 + num5;

    printf("%d\n", sum);

    float decimal1 = 1.0;
    float decimal2 = decimal1 + 0.1;
    float decimal3 = decimal2 + 0.1;
    float decimal4 = decimal3 + 0.1;
    float decimal5 = decimal4 + 0.1;
    float decimal6 = decimal5 + 0.1;
    float decimal7 = decimal6 + 0.1;
    float decimal8 = decimal7 + 0.1;
    float decimal9 = decimal8 + 0.1;
    float decimal10 = decimal9 + 0.1;
    float decimal11 = decimal1 + 1;




    float average = (decimal1 + decimal2 + decimal3 + decimal4 + decimal5 + decimal6 + decimal7 + decimal8 + decimal9 + decimal10 + decimal11)/11;


    printf("%f\n", average);


    
    return 0;
}
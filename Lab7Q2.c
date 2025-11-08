/*
    program using an array that will allow the user to input 3 temperature
    readings in Fahrenheit. After all the temperatures have been read from the keyboard,
    display each of these temperatures on the screen and its corresponding temperature in
    Celsius.

    Nádyla Da Cunha Barbosa

    04/11/2025
*/

#include <stdio.h>
#define NUM 3

int main() {
    float fahrenheit[NUM] = {0};
    float celsius = 0;
    int i = 0; 


    for (i = 0; i < NUM; i++){
        printf("Enter temp in fahrenheit: ");
        scanf("%f", &fahrenheit[i]);

        printf("Your temp in Fahrenheit is: %0.2f\n", fahrenheit[i]);

        celsius = (fahrenheit[i] - 32.0) * (5.0 / 9.0);
        printf("Your temp in Celsius is: %0.2f\n", celsius);
    }

    return 0;
}
/*
    PASS BY VALUE. 
    Write a program to demonstrate the use of Pass by Value with a function.
    
    Begin by creating an integer variable in your main() and initialise it to 1.
    
    Display this value here to standard output.
    
    Next, call your function and pass this variable as a parameter to the function. 
    Increment the parameter variable in your function by 2 and display this value here. 
    Your function should end here, and execution returns back to where the function was called. 
    
    Finally, display the value of the variable in your main() again and see if it has changed value. 
    
    Did the function increment the variable in your main()?

    Nadyla Da Cunha Barbosa

    10/02/2026
*/

#include <stdio.h>

// passing the function by VALUE  
void function1(int);

int main() {
    int num = 1;

    // display variable num before going through the function1
    printf("\nBefore function: %d\n", num);

    function1(num);

    // display variable num before going through the function1
    printf("\nAfter function: %d\n\n", num);

    return 0;
}// end main()

// COPIES the value from parameter
void function1(int n) 
{
    // adds 2 to the parameter n
    n += 2;

    // display parameter
    printf("\nInside function: %d\n", n);

}// end function1()
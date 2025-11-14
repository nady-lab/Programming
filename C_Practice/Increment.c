#include <stdio.h>

int main() {
    int a = 10;
    
    printf("Value of a before pre-increment: %d\n", a);
    
    int preIncrement = ++a; // Pre-increment: a is incremented before its value is used

    
    printf("Pre-increment value: %d\n", preIncrement); // Outputs: 5
    printf("Value of a after pre-increment: %d\n", a); // Outputs: 6
    
    return 0;
}
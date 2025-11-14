#include <stdio.h>

int main() {
    int var = 0;
    char my_char = ' ';
    char my_string[100]; // Declare a string with sufficient size

    printf("Enter a single number, a single character, and a string: \n");
    
    scanf("%d", &var);
    scanf(" %c", &my_char); // Add a space before %c to consume any leftover newline
    scanf("%99s", my_string); // Use %99s to prevent buffer overflow

    printf("You entered %d, %c, and %s\n", var, my_char, my_string);

    return 0;
}
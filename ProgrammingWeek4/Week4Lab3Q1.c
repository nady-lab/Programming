#include <stdio.h>

int main () 
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    printf("Give me three whole numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%d\n%d\n%d\n", num1, num2, num3);

    return 0;
}
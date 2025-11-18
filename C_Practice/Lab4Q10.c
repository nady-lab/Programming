#include <stdio.h>

int main() {
    
    float scale_value = 0;

    printf("What was the value of the earthquake on a Richter scale: \n");
    scanf("%f", &scale_value);

    if (scale_value < 4){
        printf("Little.");
    }
    else if (scale_value >= 4 && scale_value <= 4.9)
    {
        printf("Windows shake.\n");
    }
    else if (scale_value >= 5 && scale_value <= 5.9)
    {
        printf("Walls crack; poorly built buildings are damaged.\n");
    }
    else if (scale_value >= 6 && scale_value <= 6.9)
    {
        printf("Chimneys tumble; ordinary buildings are damaged.\n");
    }
    else if (scale_value >= 7 && scale_value <= 7.9)
    {
        printf("Underground pipes break; well built buildings are damaged.\n");
    }
    else
    {
        printf("Ground rises and falls in waves; most buildings are destroyed.\n");
    }
        
    return 0;
}
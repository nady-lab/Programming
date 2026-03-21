/*
    Description: program to calculate the volume of a cube

    Date: 30/09/2025

    Authors: Nádyla Barbosa
*/

#include <stdio.h>

int main() {

    float length = 2.8;
    float height = length;
    float width = length;

    float volume_cube = length * height * width;

    printf("the volume of the cube is %f\n", volume_cube);

    return 0;
}
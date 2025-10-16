/*
    Description: Program to calculate and display the volume and the surface area of a 
    box h = 10, l = 11.5, w = 2.5 
    && calculate the area of a circle with r = 4.8, pi = 3.14

    Date: 30/09/2025

    Author: Nádyla Barbosa
*/

#include <stdio.h>

int main() {
    //(i)
    int height = 10;
    float length = 11.5;
    float width = 2.5;

    //formula for the volume of a box = height*lenght*width. 
    float box_volume =  (float)height * length * width;
    //formula for the surface area of a box = 2(length*width) + 2(length*height) + 2(width*height).
    float box_surface_area =  2*(length * width) + 2*(length * (float)height) + 2*(width * (float)height);

    printf("The volume of the box is %.2f cm^3.\n", box_volume);
    printf("The surface area for the box is %.2f cm^2.\n", box_surface_area);

    //(ii)
    float r = 4.8;
    float pi = 3.14;

    //formula for the area of a circle = pi*radius^2.
    float area_circle = pi * r * r;

    printf("The area of the circle is %f cm^2.\n", area_circle);

    return 0;
}
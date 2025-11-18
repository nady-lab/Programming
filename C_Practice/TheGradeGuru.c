/*
    Create an array grades[10].
    Use a loop to take each student’s grade.
    Print the average grade at the end.

    Nadyla Barbosa

    28/10/2025
*/

#include <stdio.h>

int main() {
    int students;
    float average;
    float sum_grade;
    int i;
    float grades[5];

    for (i = 0; i < 5; i++) {
        printf("Enter grade: ");
        scanf("%f", &grades[i]);
        sum_grade += grades[i];
    }

    average = sum_grade / 5;

    printf("%0.2f\n", average);

    return 0;
}
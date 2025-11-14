/*
    -> A program that Ask the user how many students they want to enter.
    * Only allow a maximum of 5.
    * For each student, record a single character representing their name (e.g., ‘A’, ‘B’, ‘C’).
    
    Each student has three subject marks.
    * Read all the marks for all students and store them appropriately.

    For every student:
    * calculate their total marks
    * calculate their average
    * determine their grade category based on their average
    (e.g., fail/pass/merit or any categories you choose)

    After all data is entered, display a menu with the following options:
    * Option 1
        Show each student’s ID and their calculated average.
    * Option 2
        Ask the user for a student index and display all their subject marks.
    * Option 3
        Identify and display the student with the highest average.
    * Option 4
        Identify and display the student with the lowest average.
    * Option 5
        Allow the user to select a student and change the stored average value.

    When the user chooses 0, print a final message and end the program.

    -> Nadyla Da Cunha Barbosa

    -> 14/11/2025
*/

#include <stdio.h>
#define SIZE 5

int main() {
    int num_students;
    int students[SIZE];
    int i, j;
    char name;
    float grade1, grade2, grade3;
    float total_grade, average;
    int menu;

    printf("How many students will you be grading?: ");
    scanf("%d", &num_students);
    students[num_students];
    
    for(i = 0; i < num_students; i++)
    {
        printf("%d\n", students[i]);
    }






    return 0;
}
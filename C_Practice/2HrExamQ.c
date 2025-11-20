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
    * !!Option 1
        Show each student’s ID and their calculated average.
    * !!Option 2
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
#define SUBJECT 3
#define MAX_CHARACTERS 10

int main() {
    int num_students;
    int students[SIZE];
    int i, j;
    float sum[SIZE];
    char name[SIZE];
    char name_search;
    char grade[SUBJECT][MAX_CHARACTERS] = {"Merit", "Pass", "Fail"};
    float marks[SIZE][SUBJECT];
    float average[SIZE];
    float highest_average;
    float lowest_average;
    int menu;

    printf("How many students will you be grading?: ");
    scanf("%d", &num_students);

    if (num_students > SIZE)
    {

        while (num_students > SIZE)
        {
        printf("TOO MANYYY, try 5 or less: ");
        scanf("%d", &num_students);
        }
    }
    if (num_students <= SIZE)
    {
        for(i = 0; i < num_students; i++)
        {
            average[i] = 0;
            sum[i] = 0;

            printf("Enter the name of student %d:\n ", i + 1);
            scanf(" %c", &name[i]);

            for(j = 0; j < SUBJECT; j++)
            {
                printf("Enter the marks for subject %d:\n", j + 1);
                scanf("%f", &marks[i][j] );

                sum[i] += marks[i][j];
            }  
        

            average[i] = sum[i] / SUBJECT;
            
        }

        printf("Enter 1 to:\tShow each student’s ID and their calculated average.\n");
        printf("Enter 2 to:\tAsk the user for a student index and display all their subject marks.\n");
        printf("Enter 3 to:\tIdentify and display the student with the highest average.\n");
        printf("Enter 4 to:\tIdentify and display the student with the lowest average.\n");
        printf("Enter 5 to:\tSelect a student and change the stored average value.\n"); 
        printf("Enter 0 to:\tFinish program.\n");

        scanf("%d", &menu);

        while (menu != 0)
        {
            switch (menu)
            {
            case 1:
                
                for(i = 0; i < num_students; i++)
                {

                    if (average[i] >= 80) 
                    {
                        printf("Student: %c\tTotal marks: %0.2f\tAverage: %0.2f\tGrade: %s\n", name[i], sum[i], average[i], grade[0]);
                    }
                    else if (average[i] >= 50)
                    {
                        printf("Student: %c\tTotal marks: %0.2f\tAverage: %0.2f\tGrade: %s\n", name[i], sum[i], average[i], grade[1]);
                    }
                    else
                    {
                        printf("Student: %c\tTotal marks: %0.2f\tAverage: %0.2f\tGrade: %s\n", name[i], sum[i], average[i], grade[2]);
                    }

                }
                break;

            case 2: 
                
                printf("Enter the first letter of the students name: ");
                scanf(" %c", &name_search);

                for (i = 0; i < num_students; i++)
                {
                    if (name[i] == name_search)
                    {
                        printf("Student: %c\tTotal marks: %0.2f\tAverage: %0.2f\n\n", name[i], sum[i], average[i]);
                    }
                }
                
                break;

            case 3:

                printf("The highest average was:\n ");
        
                highest_average = average[0];

                for (i = 0; i < num_students; i++)
                {
                    if (highest_average < average[i])
                    {
                        highest_average = average[i];
                    }
                }            
                
                for (i = 0; i < num_students; i++)
                {
                    if(highest_average == average[i])
                    {
                        printf("Student: %c\tTotal marks: %0.2f\tAverage: %0.2f\n\n", name[i], sum[i], average[i]);
                    }
                }

                break;
            
            case 4:

                printf("The lowest average was:\n ");

                lowest_average = average[0];

                for (i = 0; i < num_students; i++)
                {
                    if (lowest_average > average[i])
                    {
                        lowest_average = average[i];
                    }
                }            
                
                for (i = 0; i < num_students; i++)
                {
                    if(lowest_average == average[i])
                    {
                        printf("Student: %c\tTotal marks: %0.2f\tAverage: %0.2f\n\n", name[i], sum[i], average[i]);
                    }
                }

                break;

            case 5:

                printf("Enter the first letter of the students name: ");
                scanf(" %c", &name_search);


                for (i = 0; i < num_students; i++)
                {
                    if (name[i] == name_search)
                    {
                        printf("Student: %c\tTotal marks: %0.2f\tAverage: %0.2f\n\n", name[i], sum[i], average[i]);

                        sum[i] = 0;

                        printf("Enter student %c's new marks:\n", name[i]);
                        
                        for(j = 0; j < SUBJECT; j++)
                        {
                            printf("Enter the marks for subject %d:\n", j + 1);
                            scanf("%f", &marks[i][j] );

                            sum[i] += marks[i][j];
                        }  
        
                        average[i] = sum[i] / SUBJECT;

                        printf("Student: %c\tTotal marks: %0.2f\tAverage: %0.2f\n\n", name[i], sum[i], average[i]);

                    }
                }

                break;

            default:

                printf("Choose another option.\n");
                break;
            } 

            printf("Enter 1 to:\tShow each student’s ID and their calculated average.\n");
            printf("Enter 2 to:\tAsk the user for a student index and display all their subject marks.\n");
            printf("Enter 3 to:\tIdentify and display the student with the highest average.\n");
            printf("Enter 4 to:\tIdentify and display the student with the lowest average.\n");
            printf("Enter 5 to:\tSelect a student and change the stored average value.\n"); 
            printf("Enter 0 to:\tFinish program.\n");

            scanf("%d", &menu);
        }

        printf("Program finished successfully.");
        
    }
    
    return 0;
}
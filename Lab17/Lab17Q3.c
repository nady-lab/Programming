/*
    A structure template to store biographical data about a person

    The program must:
    a) eneter data for a person's:
        first name,
        surname,
        dob,
        height,
        weight,
        eye colour, 
        coutry of citizenship
    b) display the data entered
    c) copy the data and store it in a 2nd person's record then modify it
    d) display the new data for the 2nd person

    ** HINT: for part (c), when you create two variables of the same structure template, try using
            structure_variable2 = structure_variable1; 
            This will copy ALL member data from structure_variable1 directly into structure_variable2, i.e., an exact copy 

    Nadyla Barbosa

    17/03/2026
*/

#include <stdio.h>
#include <string.h>

#define NAME 30
#define SURNAME 30
#define EYE_COLOUR 30
#define COUNTRY 40

// stuct to store dates
struct date
{
    int day;
    int month;
    int year;
};

// structure template for the person's data
struct person_data
{
    char first_name[NAME];
    char surname[SURNAME];
    struct date date_birth;
    float height;
    float weight;
    char eye_colour[EYE_COLOUR];
    char country_citizenship[COUNTRY];
};

int main()
{
    struct person_data person1, person2;

    printf("\nEnter first name: ");
    fgets(person1.first_name, sizeof(person1.first_name), stdin);

    // remove newline tag
    person1.first_name[strcspn(person1.first_name, "\n")] = '\0';

    printf("\nEnter the surname: ");
    fgets(person1.surname, sizeof(person1.surname), stdin);

    person1.surname[strcspn(person1.surname, "\n")] = '\0';

    printf("\nEnter the date of birth: ");
    scanf("%d", & person1.date_birth.day);
    scanf("%d", & person1.date_birth.month);
    scanf("%d", & person1.date_birth.year);

    printf("\nEnter the height: ");
    scanf("%f", & person1.height);

    printf("\nEnter the weight: ");
    scanf("%f", & person1.weight);

    // remove newline tag from the other member
    getchar();

    printf("\nEnter the eye colour: ");
    fgets(person1.eye_colour, sizeof(person1.eye_colour), stdin);

    person1.eye_colour[strcspn(person1.eye_colour, "\n")] = '\0';

    printf("\nEnter the country of citizenship: ");
    fgets(person1.country_citizenship, sizeof(person1.country_citizenship), stdin);

    person1.country_citizenship[strcspn(person1.country_citizenship, "\n")] = '\0';

    // display the values
    printf("\nFirst name: %s\n", person1.first_name);
    printf("Surname: %s\n", person1.surname);
    printf("DOB: %d/%d/%d\n", person1.date_birth.day, person1.date_birth.month, person1.date_birth.year);
    printf("Height: %.2f (m)\n", person1.height);
    printf("Weight: %.2f (kg)\n", person1.weight);
    printf("Eye color: %s\n", person1.eye_colour);
    printf("Country of citizenship: %s\n", person1.country_citizenship);

    // copy data and store it in a person 2 record then modify
    person2 = person1;

    printf("\nEnter first name: ");
    fgets(person2.first_name, sizeof(person2.first_name), stdin);

    // remove newline tag
    person2.first_name[strcspn(person2.first_name, "\n")] = '\0';

    printf("\nEnter the surname: ");
    fgets(person2.surname, sizeof(person2.surname), stdin);

    person2.surname[strcspn(person2.surname, "\n")] = '\0';

    printf("\nEnter the date of birth: ");
    scanf("%d", & person2.date_birth.day);
    scanf("%d", & person2.date_birth.month);
    scanf("%d", & person2.date_birth.year);

    printf("\nEnter the height: ");
    scanf("%f", & person2.height);

    printf("\nEnter the weight: ");
    scanf("%f", & person2.weight);

    // remove newline tag from the other member
    getchar();

    printf("\nEnter the eye colour: ");
    fgets(person2.eye_colour, sizeof(person2.eye_colour), stdin);

    person2.eye_colour[strcspn(person2.eye_colour, "\n")] = '\0';

    printf("\nEnter the country of citizenship: ");
    fgets(person2.country_citizenship, sizeof(person2.country_citizenship), stdin);

    person2.country_citizenship[strcspn(person2.country_citizenship, "\n")] = '\0';

    // display the values
    printf("\nFirst name: %s\n", person2.first_name);
    printf("Surname: %s\n", person2.surname);
    printf("DOB: %d/%d/%d\n", person2.date_birth.day, person2.date_birth.month, person2.date_birth.year);
    printf("Height: %.2f (m)\n", person2.height);
    printf("Weight: %.2f (kg)\n", person2.weight);
    printf("Eye color: %s\n", person2.eye_colour);
    printf("Country of citizenship: %s\n", person2.country_citizenship);

    return 0;
}// end main
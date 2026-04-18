/*
    A program that allows user to 
    * enter travel information for 2 passengers
    * display the data for each passenger
    
    using this design for the data structure:
    * airline name
    * flight number
    * passenger surname
    * seat number (12A, 25C)
    * destination 
    * no. of bags

    Nadyla da Cunha Barbosa

    14/04/2026
*/
#include <stdio.h>
#include <stdlib.h>

// define the max size any char array can be
#define MAX_CHARS 100

// data structure template
struct passenger_info
{
    char airline_name[MAX_CHARS];
    int flight_no;
    char passenger_surname[MAX_CHARS];
    char seat_no[MAX_CHARS];
    char destination[MAX_CHARS];
    int bags_no;
};

// function that allows user to enter informartion
void enter_info(struct passenger_info *);

// function to display passenger info
void display(struct passenger_info *);

int main()
{
    // initialise two struct variables 
    struct passenger_info p1; // passenger 1
    struct passenger_info p2; // passenger 2

    enter_info(& p1);
    enter_info(& p2);

    display(& p1);
    display(& p2);

    return 0;
}

// function that allows user to enter informartion by passing a struct var
void enter_info(struct passenger_info *passenger)
{   
    printf("\ninformation for passenger 1.\n");

    printf("\nAirline name: ");
    fgets(passenger->airline_name, MAX_CHARS, stdin);

    printf("Flight Number: ");
    scanf("%d", & passenger->flight_no);
    // clear buffer so the enter key is not passed down
    while(getchar() != '\n');

    printf("Passenger Surname: ");
    fgets(passenger->passenger_surname, MAX_CHARS, stdin);

    printf("Seat Number: ");
    fgets(passenger->seat_no, MAX_CHARS, stdin);

    printf("Destination: ");
    fgets(passenger->destination, MAX_CHARS, stdin);

    printf("No. of Bags: ");
    scanf("%d", & passenger->bags_no);
    while(getchar() != '\n');

    printf("\n");
}// end enter_info()

void display(struct passenger_info *passenger)
{
    printf("\n----Passenger Info----\n");
    printf("Airline name: %s\n", passenger->airline_name);
    printf("Flight Number: %d\n\n", passenger->flight_no);
    printf("Passenger Surname: %s\n", passenger->passenger_surname);
    printf("Seat Number: %s\n", passenger->seat_no);
    printf("Destination: %s\n", passenger->destination);
    printf("No. of Bags: %d\n", passenger->bags_no);
}// end display()
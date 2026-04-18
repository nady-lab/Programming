/*
    A program that allows user to
    * enter travel information for 2 passengers -> using struct array
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
// max number of passengers
#define PASSANGERS_NO 2

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
void enter_info(struct passenger_info []);

// function to display passenger info
void display(struct passenger_info []);

int main()
{
    // initialise two struct variables
    struct passenger_info passangers[PASSANGERS_NO];

    enter_info(passangers);

    display(passangers);

    return 0;
}

// function that allows user to enter informartion by passing a struct var
void enter_info(struct passenger_info passenger[])
{
    for (int i = 0; i < PASSANGERS_NO; i++)
    {
        printf("\ninformation for passenger 1.\n");

        printf("\nAirline name: ");
        fgets(passenger[i].airline_name, MAX_CHARS, stdin);

        printf("Flight Number: ");
        scanf("%d", & passenger[i].flight_no);
        // clear buffer so the enter key is not passed down
        while (getchar() != '\n');

        printf("Passenger Surname: ");
        fgets(passenger[i].passenger_surname, MAX_CHARS, stdin);

        printf("Seat Number: ");
        fgets(passenger[i].seat_no, MAX_CHARS, stdin);

        printf("Destination: ");
        fgets(passenger[i].destination, MAX_CHARS, stdin);

        printf("No. of Bags: ");
        scanf("%d", &passenger[i].bags_no);
        while (getchar() != '\n');

        printf("\n");
    }
} // end enter_info()

void display(struct passenger_info passenger[])
{
    for(int i = 0; i < PASSANGERS_NO; i++)
    {
        printf("\n----Passenger Info----\n");
        printf("Airline name: %s\n", passenger[i].airline_name);
        printf("Flight Number: %d\n\n", passenger[i].flight_no);
        printf("Passenger Surname: %s\n", passenger[i].passenger_surname);
        printf("Seat Number: %s\n", passenger[i].seat_no);
        printf("Destination: %s\n", passenger[i].destination);
        printf("No. of Bags: %d\n", passenger[i].bags_no);
    }
} // end display()
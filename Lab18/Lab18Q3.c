/*
    A program that uses a structure to store:
    * city name
    * population
    * annual rainfall (mm)
    * annual sunshine (hours)

    display the data that was entered
    Calculate the city with the highest annual rainfall
    find the city with the lowest annual sunshine

    Nadyla da Cunha Barbosa

    14/04/2026
*/

#include <stdio.h>
#include <stdlib.h>

// macros
#define MAX_CHAR 50
#define CITIES_NO 2

// data struct template
struct city_info
{
    char city_name[MAX_CHAR];
    int population;
    float annual_rainfall; // mm
    float annual_sunshine; // hours
};

void enter_info(struct city_info *);

// function to display the data entered
void display_city(struct city_info *);

// function to calculate the city highest annual rainfall
void highest_rainfall(struct city_info *);

// function to calculate the lowest annual sunshine
void lowest_sunshine(struct city_info *);

int main()
{
    struct city_info cities[CITIES_NO];
    struct city_info *ptr;

    ptr = cities;

    enter_info(ptr);
    display_city(ptr);
    highest_rainfall(ptr);
    lowest_sunshine(ptr);

    return 0;
} // end main

void enter_info(struct city_info *ptr)
{
    for (int i = 0; i < CITIES_NO; i++)
    {
        printf("\nCity %d details\n", i + 1);

        printf("\nCity Name: ");
        fgets((ptr + i)->city_name, MAX_CHAR, stdin);

        printf("Population: ");
        scanf("%d", &(ptr + i)->population);

        printf("Annual rainfall (mm): ");
        scanf("%f", &(ptr + i)->annual_rainfall);
    
        printf("Annual sunshine (hours): ");
        scanf("%f", &(ptr + i)->annual_sunshine);

        while(getchar() != '\n');

        printf("\n");
    }
} // end enter_info()

// function to display the data entered
void display_city(struct city_info *ptr)
{
    for (int i = 0; i < CITIES_NO; i++)
    {
        printf("\nCity %d Info\n", i + 1);
        printf("City name: %s", (ptr + i)->city_name);
        printf("Population: %d\n", (ptr + i)->population);
        printf("Annual Rainfall: %.2f mm\n", (ptr + i)->annual_rainfall);
        printf("Annual Sunshine: %.2f hours\n\n", (ptr + i)->annual_sunshine);
    } // end for
} // end display_city

// function to calculate the city highest annual rainfall
void highest_rainfall(struct city_info *ptr)
{
    int highest = 0;

    for (int i = 0; i < CITIES_NO; i++)
    {
        if((ptr + 1)->annual_rainfall > (ptr + highest)->annual_rainfall)
        {
            highest = i;
        }// end if
    }// end for

    printf("City with highest rainfall: %s(%.2f mm)\n",
        (ptr + highest)->city_name,
        (ptr + highest)->annual_rainfall);
}// end highest_rainfall()

// function to calculate the lowest annual sunshine
void lowest_sunshine(struct city_info *ptr)
{   
    int lowest = 0;
    
    for (int i = 0; i< CITIES_NO; i++)
    {
        if((ptr + i)->annual_sunshine < (ptr + lowest)->annual_sunshine)
        {
            lowest = i;
        }// end if
    }// end for

    printf("City with lowest sunshine: %s(%.2f hours)\n",
           (ptr + lowest)->city_name,
           (ptr + lowest)->annual_sunshine);
}// end lowesr_sunshine()

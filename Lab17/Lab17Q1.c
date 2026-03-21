/*
    Write structure templates for each of these:
    a) a playing card (example: five of diamonds, three of spades)
    b) a stock record consisting of a stock number (int),
        a stock description (20 chars), and a stock quantity (int)
    c) a library book record consisting of ISBN (13 chars),
        book title (30 chars), author (25 chars), a price (float)
    d) customer record consisting of a customer number (unsigned int),
        a name (25 chars), an address (45 chars), and an outstanding
        balance (double)
    e) a transaction record consisting of a transaction type (1 char),
        the date of the transaction (3 ints), and the amount of the 
        transaction (float)
    f) the time of day using the 12-hour format (example: hours, minutes, 
        and seconds && eithter am/pm)
    g) the longitude and latitude co-ordinated of a geographical position
        consisting of degrees (int), minutes (int), an direction ('N', 'S', 'E' or 'W')
    h) thirty teams in a league. For each team store the team name (20 chars),
        and the number of wins, draws and losses for both home and away games.


    Nadyla da Cunha Barbosa

    17/03/2026
*/

#include <stdio.h>
#include <string.h>

#define MAX_CHARS 20
#define ISBN_CHARS 13
#define BOOK_TITLE 30
#define AUTHOR 25
#define NAME 25
#define ADDRESS 45
#define PERIOD 3
#define NUM_TEAMS 30
#define TEAM_NAME 20

// struct template for a playing card
struct playing_cards
{
    int num;
    char card_name[MAX_CHARS];
};

// struct template for stock record
struct stock_records
{
    int stock_num;
    char stock_description[MAX_CHARS];
    int stock_quantity;
};

// struct template for library book record
struct library_records
{
    char isbn[ISBN_CHARS];
    char book_title[BOOK_TITLE];
    char author[AUTHOR];
    float price;
};

// struct template for customer record 
struct customer_records
{
    unsigned int customer_number;
    char name[NAME];
    char address[ADDRESS];
    double outstanding_balance;
};

// struct template for transaction records
// struct for the date
struct date_template
{
    int day;
    int month;
    int year;
};

struct transaction_records
{
    char transaction_type;
    struct date_template date;
    float amount_of_transactions;
};

// struct template to store time format
struct time_format
{
    int hour;
    int mins;
    int secs;
    char period[PERIOD];
};

// struct template for longitude & latitude co-ordinates
// with degrees, minutes, and direction
struct longitude_latitude
{
    int degrees;
    int minutes;
    char direction;
};

// struct for thirty teams in a league.
// struct for games win, losses and draws
struct game_result
{
    int wins;
    int draws;
    int losses;
};


struct team
{
    char team_name[TEAM_NAME];
    struct game_result home;
    struct game_result away;
};

// because there's 30 teams in a league
struct team league[NUM_TEAMS];

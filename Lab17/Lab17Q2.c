/*
    Write statements to:
    a) assign a value to each member of stock_item
    b) input a value to each member of stock_item
    c) display the value of each member of stock_item
    give the following definitions:

        struct stock_record
        {
            int no;
            char description[21];
            float price;
            int qty;
        };

        struct stock_record stock_item;

    Nadyla Barbosa

    17/03/2026
*/

#include <stdio.h>
#include <string.h>

struct stock_record
{
    int no;
    char description[21];
    float price;
    int qty;
};

int main()
{
    struct stock_record stock_item;

    // assign a value to each member of stock_item
    stock_item.no = 101;
    strcpy(stock_item.description, "Red Pen");
    stock_item.price = 1.50;
    stock_item.qty = 200;

    // input a value to each member of stock_item
    printf("\nEnter item num: ");
    scanf("%d", &stock_item.no);

    // consume leftover newline from scanf
    getchar();

    printf("\nEnter the description: ");
    fgets(stock_item.description, sizeof(stock_item.description), stdin);

    // remove trailing new line if there's one
    /*if (strlen(stock_item.description) > 0 && stock_item.description[strlen(stock_item.description) - 1] == '\n')
    {
        stock_item.description[strlen(stock_item.description) - 1] = '\0';
    } // end if 
    */
    // alternative way to remove new line
    stock_item.description[strcspn(stock_item.description, "\n")] = '\0';

    printf("\nEnter price: ");
    scanf("%f", &stock_item.price);

    printf("\nEnter quantity: ");
    scanf("%d", &stock_item.qty);

    // display values
    printf("\nItem Number: %d\n", stock_item.no);
    printf("Description: %s\n", stock_item.description);
    printf("Price: %.2f\n", stock_item.price);
    printf("Quantity: %d\n", stock_item.qty);

    return 0;
}

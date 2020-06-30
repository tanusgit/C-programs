/*
(1) Create three files to submit:

    ItemToPurchase.h - Struct definition and related function declarations
    ItemToPurchase.c - Related function definitions
    main.c - main() function

Build the ItemToPurchase struct with the following specifications:

    Data members (3 pts)
        char itemName [ ]
        int itemPrice
        int itemQuantity
    Related functions
        MakeItemBlank() (2 pts)
            Has a pointer to an ItemToPurchase parameter.
            Sets item's name = "none", item's price = 0, item's quantity = 0
        PrintItemCost()
            Has an ItemToPurchase parameter.

*/
#include <stdio.h>
#include <string.h>
#include "ItemToPurchase.h"

void MakeItemBlank(Item *item)
{
    item->itemPrice = 0;
    item->itemQuantity = 0;
    strcpy(item->itemName, "none");
}

void StoreItemPrint(Item item)
{
    int cost = 5;
    printf("%d\n", cost);
}

int main()
{
    struct item item1;
    char name[100];
    int price;
    int quant;

    printf("Item1:\n");
    char c = getchar();
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }

    printf("enter item name:\n");
    scanf("%s", &name);
    strcpy(item1.itemName, name);

    printf("enter item price:\n");
    scanf("%d", &price);
    strcpy(item1.itemPrice, price);

    printf("enter item quantity:\n");
    scanf("%d", &quant);
    strcpy(item1.itemQuantity, quant);

    item1.itemPrice = 25;
    item1.itemQuantity = 2;
    strcpy(item1.itemName, "Nila");
    printf("%d %d %s \n", item1.itemPrice, item1.itemQuantity, item1.itemName);
    MakeItemBlank(&item1);
    printf("%d %d %s \n", item1.itemPrice, item1.itemQuantity, item1.itemName);
}
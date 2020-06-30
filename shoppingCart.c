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

void PrintItemCost(Item item)
{
    printf("%s %d @ $%d = $%d\n", item.itemName, item.itemQuantity, item.itemPrice,item.itemQuantity*item.itemPrice);
   
}

int main()
{
    struct item item1;
    struct item item2;
    char name[100];
    int price;
    int quant;

    printf("Item1:\n");
    printf("enter item name:\n");
    scanf("%[^\n]s", name);
    strcpy(item1.itemName, name);

    printf("enter item price:\n");
    scanf("%d", &price);
    item1.itemPrice = price;

    printf("enter item quantity:\n");
    scanf("%d", &quant);
    item1.itemQuantity = quant;
    //printf("%s %d %d \n", item1.itemName, item1.itemPrice, item1.itemQuantity);
    //PrintItemCost(item1);

    printf("Item2:\n");
    printf("enter item name:\n");
    scanf("%[^\n]s", name);
    strcpy(item2.itemName, name);

    printf("enter item price:\n");
    scanf("%d", &price);
    item2.itemPrice = price;

    printf("enter item quantity:\n");
    scanf("%d", &quant);
    item2.itemQuantity = quant;
    //printf("%s %d %d \n", item2.itemName, item2.itemPrice, item2.itemQuantity);
    //PrintItemCost(item2);

    printf("TOTAL COST\n");
    PrintItemCost(item1);
    PrintItemCost(item2);
  // printf("Total: $%d\n", item2.itemQuantity+item1.itemQuantity);
    /* item1.itemPrice = 25;
    item1.itemQuantity = 2;
    strcpy(item1.itemName, "Nila");
    printf("%d %d %s \n", item1.itemPrice, item1.itemQuantity, item1.itemName);
    MakeItemBlank(&item1);
    printf("%d %d %s \n", item1.itemPrice, item1.itemQuantity, item1.itemName);
    */
}
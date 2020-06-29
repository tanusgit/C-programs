#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H

typedef struct item {
     char itemName [51];
        int itemPrice;
        int itemQuantity;
} Item;

void MakeItemBlank(Item* item);
        
void StoreItemPrint(Item item);

#endif
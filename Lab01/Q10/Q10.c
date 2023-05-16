#include<stdio.h>

struct item{
    char itemName[30];
    int qty;
    float price;
    float amount;
};

void readItem(struct item *i){
    printf("Enter product name:");
    gets(i->itemName);
    printf("Enter price:");
    scanf("%f",&i->price);
    printf("Enter Quantity:");
    scanf("%d",&i->qty);

    /*calculate total amount of all quantity*/
    i->amount=(float)i->qty * i->price;
}

void printItem(struct item *i){
    /*print item details*/
    printf("\nName: %s",i->itemName);
    printf("\nPrice: %.2f",i->price);
    printf("\nQuantity: %d",i->qty);
    printf("\nTotal Amount: %.2f",i->amount);
}


int main(){
    struct item itm; /*declare variable of structure item*/
    struct item *pItem; /*declare pointer of structure item*/

    pItem=&itm; /*pointer assignment -assigning address of itm to PItem*/
    /*read item*/
    readItem(pItem);
    /*print item*/
    printItem(pItem);
    return 0;
}


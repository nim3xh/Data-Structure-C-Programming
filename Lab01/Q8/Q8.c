#include<stdio.h>
#include<string.h>
#define size 10


typedef struct book{
    char title[25];
    char author[100];
    int ISBNnum;
    float price;
}b;
void show_books_below_2000(b book_list[]);
void show_books_authered_by_kernighan(b book_list[]);

int main(){
   b book_list[size];
   int i;
   for(i=0;i<size;i++){
        printf("\nEnter Book title:");
        scanf("%s",&book_list[i].title);
        printf("\nEnter Author of the book:");
        scanf("%s",&book_list[i].author);
        printf("\nEnter ISBN number of the book:");
        scanf("%d",&book_list[i].ISBNnum);
        printf("\nEnter Price of the book:");
        scanf("%f",&book_list[i].price);
   }
   show_books_authered_by_kernighan(book_list);
   show_books_below_2000(book_list);

}
void show_books_below_2000(b book_list[]){
    int i;
    printf("Price below Rs.2000.00");
    for(i=0;i<size;i++){
        if(strcmp(book_list[i].author,"Kernighan")==0){
        printf("\nBook Name: %s ,Book Price: %.2f",book_list[i].title,book_list[i].price);
    }
    }

}

void show_books_authered_by_kernighan(b book_list[size]){
    int i;
    printf("Authered by Kernighan");
    for(i=0;i<size;i++){
        if(book_list[i].price<2000){
        printf("\nBook Name: %s ,Book Price: %.2f",book_list[i].title,book_list[i].price);
    }
    }
}

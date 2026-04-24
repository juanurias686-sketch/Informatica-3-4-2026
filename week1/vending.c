#include <stdio.h>

int main(void){

//item 1
 float price1 = 6.50;
 int Quantitychips = 6;
 char Code1 = 'A';

 //snack 2
 float price2 = 8.99;
 int Quantitysoda = 7;
 char Code2 = 'B';

 //snack 3
 float price3 = 11.11;
 int Quantityicecream = 67;
 char Code3 = 'C';

   printf("Vending machine stock \n");
    printf("---------------------- \n");

 printf("Item Name: Doritos \n");
 printf("Price: $%.2f\n", price1);
printf("Quantity Aviable: %d\n", Quantitychips);
 printf("Code: %c\n\n", Code1);


printf("Item Name: Pepsi \n");
 printf("Price: $%.2f\n", price2);
printf("Quantity Aviable: %d\n", Quantitysoda);
 printf("Code: %c\n\n", Code2);


 printf("Item Name: Ice cream \n");
 printf("Price: $%.2f\n", price3);
printf("Quantity Aviable: %d\n", Quantityicecream);
 printf("Code: %c\n\n", Code3);




}

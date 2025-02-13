#include <stdio.h>
#include <string.h>

int main(void) {
   char object1Info[100] = "Eraser 5 4";
   char object2Info[100] = "Mug 13 14";
   char object3Info[100] = "Headphones 23 26";

   char object[50];
   int quantity;
   int price;

   sscanf(object1Info, "%s %d %d", object, &quantity, &price);

   printf("%s x%d\n", object, quantity);
   printf("Price: %d", price);

   return 0;
}
/******************************************************************************
Log Session a grocery store inventory where you can add, update, or remove items using a file.
Input: Add item: Milk, 2 litres, Rs.40
Output: Inventory file now includes the new item

*******************************************************************************/
#include <stdio.h>
#include <string.h>
int main(){
 char name[50],item[50],unit[20];
 int qty;
 float price;
 FILE *fp=fopen("inventory.txt","a");
 if(fp==NULL){
  printf("Error opening file");
  return 1;
 }
 printf("Enter item name: ");
 scanf("%s",item);
 printf("Enter quantity: ");
 scanf("%d",&qty);
 printf("Enter unit (like litres, kg): ");
 scanf("%s",unit);
 printf("Enter price: ");
 scanf("%f",&price);
 fprintf(fp,"%s %d %s %.2f\n",item,qty,unit,price);
 fclose(fp);
 printf("Item added to inventory");
 return 0;
}
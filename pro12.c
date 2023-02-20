#include<stdio.h>
void main()
{
int item,profit;
float original;
printf("Selling price of 15 items :");
scanf("%d",&item);
printf("Profit earned on them :");
scanf("%d",&profit);

original = item-profit;
printf("Price of single item :%f\n",original/15);
}

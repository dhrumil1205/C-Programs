#include<stdio.h>
void main()
{
int amount,total;
int n1,n2,n3;
printf("Enter the amount to withdraw in hundred :");
scanf("%d",&amount);

n1 = amount/100;
printf("No. of 100 rupees notes cashier will give to withdrawer :%d\n",n1);
total = amount - n1*100;

n2 = total/50;
printf("No. of 50 rupees notes cashier will give to withdrawer :%d\n",n2);
total = total - n2*50;

n3 = total/10;
printf("No. of 10 rupees notes cashier will give to withdrawer :%d\n",n3);
}

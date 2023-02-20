#include<stdio.h>
void main()
{
int num;
int d1,d2,d3,d4,d5;
printf("Enter the five digit num :");
scanf("%d",&num);

d5 = num%10;
d5 =d5+1;
num = num/10;

d4 = num%10;
d4 =d4+1;
num = num/10;

d3 = num%10;
d3 = d3+1;
num =num/10;

d2 = num%10;
d2 =d2+1;
num =num/10;

d1 = num%10;
d1 =d1+1;

printf("Output is :%d%d%d%d%d\n",d1,d2,d3,d4,d5);

}

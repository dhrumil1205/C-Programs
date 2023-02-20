#include<stdio.h>
void main()
{
int days;
float m,y,w;
printf("Enter the days :");
scanf("%d",&days);

m = days/30;
y = days/365;
w = days/7;
printf("Days to month :%f\n",m);
printf("Days to week :%f\n",w);
printf("Days to year :%f\n",y);
}

#include<stdio.h>
#include<math.h>
void main()
{
double x,y,eq1,eq2;

printf("Enter the value of x :");
scanf("%lf",&x);
printf("Enter the value of y :");
scanf("%lf",&y);
eq1 = pow(x,3) + pow(x,2) + 2*x + 5;
eq2 = pow(x,2)+ pow(y,2)+ 2*x*y - 10;
printf("Answer of eq1 :%lf\n",eq1);
printf("Answer of eq2 :%lf\n",eq2);

}

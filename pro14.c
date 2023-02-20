#include<stdio.h>
void main()
{
float height,m,in,cm;
printf("Enter the height in feet :");
scanf("%f",&height);

m = height*0.3048;
cm = height*30.48;
in = height*12;
printf("Height in meter :%f\n",m);
printf("Height in cm :%f\n",cm);
printf("Height in inches :%f\n",in);
}

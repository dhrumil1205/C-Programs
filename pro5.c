#include<stdio.h>
void main()
{
	int l,b;
	int area,perimeter;
	float const pi=3.14;
	float c,r,a;

	
	printf("Enter the length of rectangle :");
	scanf("%d",&l);

	printf("Enter the breadth of rectangle :");
	scanf("%d",&b);
	
	printf("Enter the raduis of circle :");
	scanf("%f",&r);

	area = l*b;
	printf("Area of rectangle :%d\n",area);

	perimeter = 2*(l+b);
	printf("Perimeter of rectangle :%d\n",perimeter);

	c = 2*pi*r;
	printf("Circumference of circle :%f\n",c);

	a = pi*r*r;
	printf("Area of circle :%f\n",a);
}

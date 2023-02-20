#include<stdio.h>
void main()
{
	int num;
	int d5,d4,d3,d2,d1;

	printf("Enter the five digit number :");
	scanf("%d",&num);

	d5 = num%10;
	num = num/10;

	d4 = num%10;
	num = num/10;

	d3 = num%10;
	num = num/10;

	d2 = num%10;
	num = num/10;

	d1 = num%10;
	num = num/10;

	printf("Reversed Digit is :%d%d%d%d%d\n",d5,d4,d3,d2,d1);

	
}

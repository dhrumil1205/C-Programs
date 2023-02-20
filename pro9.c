#include<stdio.h>
void main()
{
	int num,sum;
	int d4,d2,d3,d1;
	printf("Enter four digit number :");
	scanf("%d",&num);

	d4 = num%10;
	num=num/10;
	d3 = num%10;
	num=num/10;
	d2 = num%10;
	num=num/10;
	d1 = num%10;
	num=num/10;

	sum = d1+d4;
	printf("Sum of first and last digit :%d\n",sum);
	
}

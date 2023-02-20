#include<stdio.h>
void main()
{
	int bs;
	int da;
	int hra;
	int gs;

	printf("Enter your basic salary :");
	scanf("%d",&bs);

	da = 0.4*bs;
	printf("Dearness Allowance :%d\n",da);

	hra = 0.2*bs;
	printf("House Rent Allowance :%d\n",hra);

	gs = bs+da+hra;
	printf("Gross salary :%d\n",gs);
}

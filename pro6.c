#include<stdio.h>
void main()
{
	int C,D,temp;

	printf("Enter the number for C :");
	scanf("%d",&C);

	printf("Enter the number for D :");
	scanf("%d",&D);

	temp = C;
	
	C = D;
	D = temp;
	
	printf("Interchanged number in C :%d\n",C);
	printf("Interchanged number in D :%d\n",D);
	
}

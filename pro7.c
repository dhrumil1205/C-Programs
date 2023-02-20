#include<stdio.h>
void main()
{
	int num,i,ld,sum=0;

	printf("Enter the five digit number :");
	scanf("%d",&num);

for(i=0;i<5;i++)
{
	ld=num%10;
	sum=sum+ld;
	num=num/10;
}

	printf("Sum of five digit :%d\n",sum);
}

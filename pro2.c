#include<stdio.h>
void main()
{
	int km,m,cm;
	float ft,in;
	
	printf("Enter the distance between two cities in km :");
	scanf("%d",&km);

	in = km*39370.1;
	printf("Covert km to inches :%f\n",in);

	m = km*1000;
	printf("Convert km to meter :%d\n",m);

	ft = km*3280.84;
	printf("Covert km to feet :%f\n",ft);

	cm = km*1000000;
	printf("Covert km to cm :%d\n",cm);
}

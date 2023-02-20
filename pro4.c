#include<stdio.h>
void main()
{
	float F,C;

	
	printf("Enter temp in Fahrenhit :");
	scanf("%f",&F);

	C = (F-32)*5/9;
	printf("Temp in Celcius :%f\n",C);
}

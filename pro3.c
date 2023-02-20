#include<stdio.h>
void main()
{
	int s1,s2,s3,s4,s5,sum;
	float per;

	printf("Enter the marks of English :");
	scanf("%d",&s1);
	
	printf("Enter the marks of Maths :");
	scanf("%d",&s2);
	
	printf("Enter the marks of Physics :");
	scanf("%d",&s3);
	
	printf("Enter the marks of Chemistry :");
	scanf("%d",&s4);
	
	printf("Enter the marks of Science :");
	scanf("%d",&s5);

	sum=s1+s2+s3+s4+s5;
	printf("Aggregrate Marks :%d\n",sum);

	per=sum/5;
	printf("Percentage :%f\n",per);


}

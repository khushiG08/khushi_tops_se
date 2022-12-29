#include<stdio.h>

void main()
{
	int a,b;
	printf("enter A =");
	scanf("%d",&a);
	printf("enter b =");
	scanf("%d",&b);
	printf("A =%d B =%d",a,b);
	
	if(a>0)
	{
		printf("\n%d is positive value",a);
	}
	
	else 
	{
		printf("\n%d is negative value",a);
	}
	
}
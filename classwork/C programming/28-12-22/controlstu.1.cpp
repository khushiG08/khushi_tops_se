#include<stdio.h>

void main();
{
	int a,b;
	printf("enter A =");
	scanf("%d",&a);
	printf("enter b =");
	scanf("%d",&b);
	printf("A =%d B =%d",a,b);
	
	if(a>0)
	{
		printf("%d is positive value",a);
	}
	
	else 
	{
		printf("%d is negative value",a);
	}
	
}
#include<stdio.h>

void main()
{
	int a,b,c;
	printf("\nEnter A =");
	scanf("%d",&a);
	printf("\nEnter B =");
	scanf("%d",&b);
	printf("\nEnter C =");
	scanf("%d",&c);
	
	printf("A =%d,B =%d,C =%d",a,b,c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("\nA is Greater");
		}
		
		else
		{
			printf("\nC is Greater");
		}
	}
	
	else
	{
		if(b>c)
		{
			printf("\nB is Greater");
		}
		else
		{
			printf("\nC is Greater");
		}
	}
	
}
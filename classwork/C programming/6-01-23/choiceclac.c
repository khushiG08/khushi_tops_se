#include<stdio.h>

void main()
{
	int a,b,choice;
	printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2 Choice Claculator \xB2\xB2\xB2\xB2\xB2\xB2");
	printf("\n\n\t\tEnter A :");
	scanf("%d",&a);
	printf("\n\n\t\tEnter B :");
	scanf("%d",&b);
	printf("\n\t\tEnter A :%d,Enter B :%d",a,b);
	printf("\n\n\t\t=================\n\n");
	printf("\n\t\tPress 1. for Addition");
	printf("\n\t\tPress 2. for Subtraction");
	printf("\n\t\tPress 3. for Multiplication");
	printf("\n\t\tPress 4. for Division");
	printf("\n\n\t\t=================\n\n");
	printf("\n\t\tEnter your choice ? ");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("\n\t\tAdiition : %d",(a+b));
	}
	else if (choice==2)
	{
		printf("\n\t\tSubtraction : %d",(a-b));
	}
	else if (choice==3)
	{
		printf("\n\t\tMultiplication : %d",(a*b));
	}
	else if (choice==4)
	{
		printf("\n\t\tDivision : %d",(a/b));
	}
	else
	{
		printf("\n\t\tInvalid Choice");
	}
	
	
	
}
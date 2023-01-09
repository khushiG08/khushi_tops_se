#include<stdio.h>

void main()
{
	int a,b,choice;
	printf("Enter A =");
	scanf("%d",&a);
	printf("Enter B =");
	scanf("%d",&b);
	printf("\nEnter A = %d,Enter B = %d",a,b);
	printf("\n\nPress 1.Add,\nPress 2.Subtract,\nPress 3.Mutliply,\nPress 4.Division,");
	printf("\nEnter your choice ?");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:printf("\nAddition : %d",(a+b));
		break;
		case 2:printf("\nSubtraction : %d",(a-b));
		break;
		case 3:printf("\nMultiplication : %d",(a*b));
		break;
		case 4:printf("\nDivision : %.2f",((float)a/b));
		break;
		default:printf("\nInvalid choice");
		break;
	}
	
	
}
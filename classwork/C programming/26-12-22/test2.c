#include<stdio.h>

void main()
{
	int num1,num2;
	
	printf("Enter Number1 =");
	scanf("%d",&num1);
	printf("Enter Number2 =");
	scanf("%d",&num2);
	
	printf("Enter Number1=%d,\nEnter Number2 =%d",num1,num2);
	printf("\nAddition =%d",(num1+num2));
	printf("\nSubtraction =%d",(num1-num2));
	printf("\nMultiplication =%d",(num1*num2));
	printf("\nDivision =%.2f",((float)num1/num2));
}
#include<stdio.h>

void main()
{
	int add,sub,multi,div,mod,a,b;
	
	printf("Enter Number1 =");
	scanf("%d",&a);
	printf("Enter Number2 =");
	scanf("%d",&b);
	
	printf("Enter Number1=%d,\nEnter Number2 =%d",a,b);
	printf("\nAddition =%d",(a+b));
	printf("\nSubtraction =%d",(a-b));
	printf("\nMultiplication =%d",(a*b));
	printf("\nDivision =%.2f",((float)a/b));
	printf("\nModulo =%d",(a%b));
}
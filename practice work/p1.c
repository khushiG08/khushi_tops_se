#include<stdio.h>

void main ()
{
	int n1,n2;
	printf("Enter the value of no.1 =");
	scanf("%d",&n1);
	printf("Enter the value of no.2 =");
	scanf("%d",&n2);
	
    printf("\nAddition =%d",(n1+n2));
	printf("\nSubtraction =%d",(n1-n2));
	printf("\nMultiplication =%d",(n1*n2));
	printf("\nDivision =%.2f",((float)n1/n2));
	printf("\nModulo =%d",(n1%n2));
}
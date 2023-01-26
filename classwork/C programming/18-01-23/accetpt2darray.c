#include<stdio.h>

void main()
{
	int matrix[3][3];
	int i,j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Elelments[%d][%d] :",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Value At Index[%d][%d] : %d",i,j,matrix[i][j]);
		}
	}
	
}
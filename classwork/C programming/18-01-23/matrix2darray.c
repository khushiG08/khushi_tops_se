#include<stdio.h>

void main()
{
	int matrix[3][3];
	int i,j;
	printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Enter Matrix \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n\t\tEnter Elelments[%d][%d] :",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Matrix\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t\t%d",matrix[i][j]);
		}
		printf("\n");
	}
	
	




	
}
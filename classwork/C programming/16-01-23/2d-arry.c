#include<stdio.h>

void main()
{
	int arr1[3][2]={{35,36},{20,21},{25,27}};
	int i,j;
	/*
	printf("%d\t",arr1[0][0]);
	printf("%d\t",arr1[0][1]);
	printf("%d\t",arr1[1][0]);
	printf("%d\t",arr1[1][1]);
	printf("%d\t",arr1[2][0]);
	printf("%d\t",arr1[2][1]);
	*/
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
	}
}
#include<stdio.h>

void main()
{
	int marks[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		printf("Enter Elements[%d] :",i);
		scanf("%d",& marks[i]);
	}
	printf("\n\n");
	for(i=0;i<5;i++)
	{
		printf("Enter at Elements[%d] :%d\n",i,marks[i]);
	}
	

	
}
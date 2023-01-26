#include<stdio.h>

void main()
{
	int arr1[3],arr2[3];
	int i;
	
	printf("Enter Array 1 :\n");
	for (i=0;i<3;i++)
	{
		printf("Enter Elements [%d] :",i);
		scanf("%d",&arr1[i]);
	}
	printf("\nEnter Array 2 :\n");
	for (i=0;i<3;i++)
	{
		printf("Enter Elements [%d] :",i);
		scanf("%d",&arr2[i]);
	}
	printf("\nArray 1\n\n");
	for (i=0;i<3;i++)
	{
		printf("Elements at Index[%d] : %d\n",i,arr1[i]);
	}
	printf("\nArray 2\n\n");
	for (i=0;i<3;i++)
	{
		printf("Elements at Index[%d] :%d\n",i,arr2[i]);
	}
	printf("\n\n\n");
	for(i=0;i<3;i++)
	{
		printf("Addition of Elements[%d] : %d\n",i,(arr1[i]+arr2[i]));
	}
}

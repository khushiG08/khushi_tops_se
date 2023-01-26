#include<stdio.h>

void main()
{
	int rollno[5];
	int i,j,t;
	printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2 Enter Elements :\xB2\xB2\xB2\xB2\xB2\xB2\n\n\t\t");
	for(i=0;i<5;i++)
	{
		printf("\tEnter Elements[%d] :",i);
		scanf("%d",&rollno[i]);
	}
	printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2 Elements At Index :\xB2\xB2\xB2\xB2\xB2\xB2\n\n\t\t");
	for(i=0;i<5;i++)
	{
		printf("\nElements at index[%d] : %d",i,rollno[i]);
	}
	printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2 Array Elements in Ascending order :\xB2\xB2\xB2\xB2\xB2\xB2\n\n\t\t");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(rollno[i]>rollno[j])
			{
				t=rollno[i];
				rollno[i]=rollno[j];
				rollno[j]=t;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\n\t\tElements at index[%d] : %d",i,rollno[i]);
	}
	printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2 Array Elements in Descending order :\xB2\xB2\xB2\xB2\xB2\xB2\n\n\t\t");
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(rollno[i]<rollno[j])
			{
				t=rollno[i];
				rollno[i]=rollno[j];
				rollno[j]=t;
			}
		}
	}
	for(i=0;i<5;i++)
	{
		printf("\n\t\tElements at index[%d] : %d",i,rollno[i]);
	}
	
	
	
}
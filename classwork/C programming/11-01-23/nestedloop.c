#include<stdio.h>

void main()
{
	int i,j,n;
    printf("\nEnter the no :");
	scanf("%d",&n);
	
	for(i=n;i<=n+3;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d X %d = %d\n",i,j,(i*j));
		}
	}
}
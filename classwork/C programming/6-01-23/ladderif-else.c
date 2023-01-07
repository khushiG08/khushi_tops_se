#include<stdio.h>

void main()
{
	int rollno,s1,s2,s3,total;
	char name[20];
	float per;
	
	printf("\nEnter Roll.No :");
	scanf("%d",&rollno);
	fflush(stdin);
	printf("\nEnter Name :");
    gets(name);
    printf("Enter Physics Marks :");
    scanf("%d",&s1);
    printf("Enter Chemistry Marks :");
    scanf("%d",&s2);
    printf("Enter maths Marks :");
    scanf("%d",&s3);
    
    printf("\nRoll No. %d",rollno);
    printf("\nName :%s",name);
    total = s1+s2+s3;
    per = (float)total/3;
    printf("\nTotal : %d",total);
    printf("\nPercentage : %.2f",per);
    printf("\nClass :");
    
    if(per>=75)
    {
    	printf("Distinction");
	}
	else if(per>=60)
	{
		printf("First class");
	}
	else if(per>=50)
	{
		printf("Second class");
	}
	else if(per>=40)
	{
		printf("Pass");
	}
	else
	{
		printf("Fail!!");
	}
	
	
}
#include<stdio.h>
int main()
{
     
     float radius, area;

     printf("For Circle");
     printf("\nEnter Radius of Circle(in cm): ");
     scanf("%f", &radius);

     area = 3.14 * radius * radius;

     printf("Area of Circle = %.2f cm\n",radius,area);
	 
	 
	 printf("\nFor Rectangle");
	 
     float len, wid;

     printf("\nEnter length & width of Rectangle (in cm): ");
     scanf("%f %f",&len,&wid);

     area = len * wid;

     printf("Area of Rectangle= %.3f cm\n",area);

     printf("\nFor Triangle") ;

     float b, h;

     printf("\nEnter base and height (in cm): ");
     scanf("%f %f", &b, &h);

     area = (0.5 * b * h);

     printf("Area of triangle= %.2f cm\n",area );
}
#include<stdio.h>
int main()
{
     float radius, area,len, wid;
     printf("\n\n\t\tFor Circle\n\n\t\t");
     printf("Enter Radius of Circle(in cm): ");
     scanf("%f", &radius);

     area = 3.14 * radius * radius;

     printf("Area of Circle = %.2f cm\n",area);
     
    printf("\n\n\t\tFor Rectangle\n\n\t\t");
     
     printf("Enter length & width of Rectangle (in cm): ");
     scanf("%f %f",&len,&wid);

     area = len * wid;

     printf("Area of Rectangle= %.2f cm\n",area);
     
    
     
}
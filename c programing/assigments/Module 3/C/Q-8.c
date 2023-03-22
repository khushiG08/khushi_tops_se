#include<stdio.h>
  
int main()  
{  
    int num;
  
    printf("Enter the number\n");
    scanf("%d", &num);
  
    (num % 2 == 0) ?
    (printf("%d is Even number\n", num)) :(printf("%d is Odd  number\n", num));  

}
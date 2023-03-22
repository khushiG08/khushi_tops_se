#include<stdio.h>

int main()
{
    int n, sum, f1, l1;
    
	printf("Enter number = ");
    scanf("%d", &n);

    l1 = n % 10;
    
    while(n >= 10)
    {
        n = n / 10;
    }
    f1 = n;
    
    sum = f1 + l1;
    printf("Sum of first and last digit = %d", sum);
}
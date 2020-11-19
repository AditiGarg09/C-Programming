#include <stdio.h>
int main()
{
    int num1,num2,sum,product;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("Sum of two numbers: %d",sum);
    product=num1*num2;
    printf("\nProduct of two numbers: %d",product);
    return 0;
}

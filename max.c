#include <stdio.h>
int main()
{
    int num1,num2,num3,max;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    printf("Enter num3: ");
    scanf("%d",&num3);
    
    if (num1>num2 && num1>num3)
    {
        max=num1;
    }
    else if(num2>num3)
    {
        max=num2;
    }
    else
    {
        max=num3;
    }
    printf("Max: %d",max);
    return 0;
}

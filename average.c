#include <stdio.h>
int main()
{
    float weight,item,sum_of_value=0,sum_of_item=0,average;
    
    printf("Enter Weight of item1: ");
    scanf("%f",&weight);
    printf("Enter number of items: ");
    scanf("%f",&item);
    
    sum_of_value+=weight*item;
    sum_of_item+=item;
    
    printf("Enter Weight of item2: ");
    scanf("%f",&weight);
    printf("Enter number of items: ");
    scanf("%f",&item);
    
    sum_of_value+=weight*item;
    sum_of_item+=item;
    average=sum_of_value/sum_of_item;
    
    printf("Average value: %f",average);
    return 0;
}

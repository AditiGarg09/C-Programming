#include <stdio.h>
int main()
{
    float radius;
    printf("Enter radius of circle: ");
    scanf("%f",&radius);
    float pi=22.0/7.0;
    printf("Perimeter of circle: %f inches",2*pi*radius);
    printf("\nArea of circle: %f inches",pi*radius*radius);
}

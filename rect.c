#include <stdio.h>
int main()
{
    float len,width;
    printf("Enter height of rectangle: ");
    scanf("%f",&len);
    printf("Enter width of rectangle: ");
    scanf("%f",&width);
    printf("Perimeter of rectangle: %.2f inches",((2*len)+(2*width)));
    printf("\nArea of rectangle: %.2f inches",(len*width));
}

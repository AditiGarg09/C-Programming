#include <stdio.h>
int main()
{
    char a,b,c;
    scanf("%c %c %c",&a,&b,&c);
    printf("Original Characters: %c%c%c",a,b,c);
    printf("\nReverse Characters: %c%c%c",c,b,a);
}


#include <stdio.h>

int main()
{
    float l,b,perimeter,area;
    printf("enter length of rectangle:");
    scanf("%f",&l);
    printf("enter breadth of rectangle:");
    scanf("%f",&b);
    perimeter=2*(l+b);
    printf("perimeter of rectangle=%f",perimeter);
    area=l*b;
    printf("area of rectangle=%f",area);
}

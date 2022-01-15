#include <stdio.h>
int main()
{
    float pi = 3.14;
    float radius,circumference,area;
    printf("Enter the radius of circle : ");
    scanf("%f", &radius);
    circumference=2*pi*radius;
    area=pi*radius*radius;
    printf("The circumference is : %f and area is : %f\n",circumference,area);
    return 0;
}
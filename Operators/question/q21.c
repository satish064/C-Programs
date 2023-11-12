#include<stdio.h>
int main(void)
{
    int radius;
    float perimeter,area,pi=3.14;
    printf("Enter the radius of the circle: ");
    scanf("%d",&radius);
    area = pi*radius*radius;
    perimeter = 2*pi*radius;
    printf("Area = %.2f, Perimeter = %.2f",area,perimeter);
    return 0;
}
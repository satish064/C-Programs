/*Program to print the larger of two numbers using conditinal operator*/
#include<stdio.h>
int main(void)
{
    int a,b;
    printf("Enter the two values: ");
    scanf("%d%d",&a,&b);
    a>b ? printf("%d is greater",a):printf("%d is greater",b);
    return 0;
    
}
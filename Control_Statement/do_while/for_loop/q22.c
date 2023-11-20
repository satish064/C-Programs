#include<stdio.h>
int main(void)
{
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for( ;n>0;n/=10)
    sum+=n%10;

    printf("Sum of the digits is: %d",sum);
    return 0;
}
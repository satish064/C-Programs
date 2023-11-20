#include<stdio.h>
int main(void)
{
    int sum = 0,n;
    do
    {
        printf("Enter a number(enter 0 for stop): ");
        scanf("%d",&n);
        sum+=n;
    }while(n!=0);
    printf("Sum of the numbers is = %d",sum);
    return 0;
}
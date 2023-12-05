#include<stdio.h>
int reverse(int n);
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Reversed number is %d",reverse(n));
    return 0;
}
int reverse(int n)
{
    int sum=0,d;
    while(n>0)
    {
        sum = sum * 10 + n % 10;
        n/=10;
    }
    return sum;
}
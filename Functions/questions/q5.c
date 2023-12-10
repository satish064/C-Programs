#include<stdio.h>
int sumPdivisors(int);
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The sum of the divisor = %d",sumPdivisors(n));
    return 0;
}
int sumPdivisors(int n)
{
    int sum = 0;
    for(int i = 1;i<=n/2;i++)
    if(n%i==0)
    sum += i;
    return sum;
}
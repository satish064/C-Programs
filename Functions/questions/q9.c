#include<stdio.h>
int isPrime(int n);
int sumPrDivisors(int i);
int main(void)
{
    for(int i = 1;i<=1000;i++)
    {
        if(isPrime(i))
        printf("%d\t",i);
    }
}
int isPrime(int i)
{
    return sumPrDivisors(i)==1;
}
int sumPrDivisors(int i)
{
    int sum = 0;
    for(int n=1;n<=i/2;n++)
    {
        if(i%n==0)
        sum += n;
    }
    return sum;
}
#include<stdio.h>
#include<math.h>
int isPrime(int n);
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(isPrime(n))
    printf("Number is prime");
    else
    printf("Number is not pirme");
    return 0;
}
int isPrime(int n)
{
    for(int i = 2;i<sqrt(n);i++)
    if(n%i==0)
    return 0;
    return 1;
}
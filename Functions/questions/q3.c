#include<stdio.h>
void prodDigits(int);
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    prodDigits(n);
    return 0;
}
void prodDigits(int n)
{
    int sum = 1;
    while(n>0)
    {
        sum *= n % 10;
        n/=10;
    } 
    printf("Product of digits %d",sum);
}
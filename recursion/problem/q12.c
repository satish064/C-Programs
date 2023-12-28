#include<stdio.h>
int divisibleBy9(long int n)
{
    if(n%9==0)
    return 1;
    if(n<9)
    return 0;
    int sumOfDigits = 0;
    while(n>0)
    {
        sumOfDigits = n%10;
        n/=10;
    }
    return divisibleBy9(sumOfDigits);
}
int main()
{
    long int n;
    printf("Enter the number: ");
    scanf("%ld",&n);
    if(divisibleBy9(n)==1)
    printf("YES");
    else
    printf("No");
    return 0;
}
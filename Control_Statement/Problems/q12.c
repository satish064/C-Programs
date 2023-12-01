#include<stdio.h>
int main(void)
{
    long long int sum = 0;
    int i,j;
    printf("Enter a number: ");
    scanf("%d",&i);
    for(j=1;j<=i;j++)
    {
        sum += j*j;
    }
    printf("The sum of all numbers square = %lld",sum);
    return 0;
}
#include<stdio.h>
int cube(int);
void cubeSum(int);
int main(void)
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    cubeSum(n);
    return 0;
}
int cube (int n)
{
    return n*n*n;
}
void cubeSum(int n)
{
    long int sum = 0;
    for(n;n>0;n/=10)
    {
        sum += cube(n % 10);
    }
    printf("%d",sum);
}
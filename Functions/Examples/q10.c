#include<stdio.h>
long int factorial(int n);
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0)
            printf("No factorial of negative number\n");
    else    
            printf("Factorial of %d is %ld\n",n,factorial(n));
    return 0;
}
long int factorial(int n)
{
    int i;
    long int fact=1;
    if(n==0)
      return 1;
    for(i=1;i<=n;i++)
      fact*=i;
    return fact;
}

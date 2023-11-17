#include<stdio.h>
int main(void)
{
    int n;
    long long int fac=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n==0)
    fac = 1;
    else
    {
    while(n)
    {
        fac*=n;
        n--;
    }  
    }
    printf("factorial = %lld",fac);
    return 0;
}
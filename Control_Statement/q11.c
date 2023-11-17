#include<stdio.h>
int main(void)
{
    int n,pro=1,rem;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n==0)
    {
        pro = 0;
    }
    else{
       while(n)
    {
        rem=n%10;
        pro*=rem;
        n/=10;
    }  
    }
   
    printf("Product of digits = %d",pro);
    return 0;
}
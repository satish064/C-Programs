#include<stdio.h>
int sumdiv(int,int);
int main()
{
    int n;
    printf("Enter a numbere: ");
    scanf("%d",&n);
    printf("The divisor is: %d",sumdiv(n,n/2));
    return 0;
}
int sumdiv(int num,int x)
{
    if(x==1)
    {
        printf("%d ",x);
        return 1;
    }
    if(num%x==0)
    {
        printf("%d ",x);
        return x+sumdiv(num,x-1);
    }
    else
    return sumdiv(num,x-1);
}
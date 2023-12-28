#include<stdio.h>
int summation(int n)
{
    int sum;
    if(n==0)
    return 0;
    else
    {
         sum = (n+summation(n-1));
         printf("%d ",n);
         return sum;
    }
}
int main()
{
    int res = summation(3);
    printf("%d",res);
}
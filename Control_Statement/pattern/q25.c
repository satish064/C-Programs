#include<stdio.h>
int main(void)
{
    int n,cube=0,i,d;
    for(i=100;i<=1000;i++)
    {
        int sum = 0;
        n=i;
        while(n>0)
        {
            d=n%10;
            n/=10;
            cube = d*d*d;
            sum += cube;
        }if(sum == i)
        printf("%d\t",i);
    }
}
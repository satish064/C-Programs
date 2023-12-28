#include<stdio.h>
int GCD(int a,int b)
{
    if(b==0)
    return a;
    else
    {
    return GCD(b,a%b);
    }
    
}
int main()
{
    int res = GCD(35,21);
    printf("%d",res);
    return 0;
}
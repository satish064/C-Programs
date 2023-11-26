#include<stdio.h>
int main(void)
{
    int a,b,x,y;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    x=a,y=b;
    while(a!=b)
    {
        if(a<b)
        a+=x;
        else
        b+=y;
    }
    printf("%d and %d LCM is : %d",x,y,b);
    a=x,b=y;
    while (a!=b)
    {
       if(a>b)
       a-=b;
       else
       b-=a;
    }
    printf("%d and %d HCF is: %d",a,b,x);
    return 0;
    
}
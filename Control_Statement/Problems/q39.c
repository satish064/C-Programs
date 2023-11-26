#include<stdio.h>
int main(void)
{
    int a,b,sum=0;
    printf("Enter two number for multiplication: ");
    scanf("%d%d",&a,&b);
    while(a>0)
    {
        if(a%2==1)
        sum += b;
        b*=2;
        a/=2;
    }
    printf("Multiplication is : %d",sum);
    return 0;
}
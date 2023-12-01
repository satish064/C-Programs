#include<stdio.h>
int main(void)
{
    int a,b,sum=1;
    printf("Enter the a: ");
    scanf("%d",&a);
    printf("Enter the b: ");
    scanf("%d",&b);
    for(int i=1;i<=b;i++)
    {
        sum*=a;
    }
    printf("%d raise to the power %d = %d",a,b,sum);
    return 0;
}
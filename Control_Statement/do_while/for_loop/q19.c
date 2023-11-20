#include<stdio.h>
int main(void)
{
    int i,a,b,result = 0;
    printf("Enter two numbers to be multiplied: ");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    result += a;

    printf("%d",result);
    return 0;
}               
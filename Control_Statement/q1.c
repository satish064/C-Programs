#include<stdio.h>
int main(void)
{
    int a,b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("%d is greater",a);
    else printf("%d is greater",b);
    return 0;
}
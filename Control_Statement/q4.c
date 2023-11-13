#include<stdio.h>
int main(void)
{
    int n,m,q,r;
    printf("Enter two numbers: ");
    scanf("%d%d",&n,&m);
    if(!m)
    printf("Divide by zero error!");
    else
    {
        q = n/m;
        r = n%m;
        printf("quotient = %d, remainder = %d",q,r);
    }
    
    return 0;
}
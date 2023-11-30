#include<stdio.h>
int main(void)
{
    int i,n,p,r = 0,m=10;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (n>0)//576
    {
        p = n % 10;//5
        r = r * m + p;//6+=70=76 576
        n /= 10;//57
    }
    printf("Revered Nu = %d and Double = %d",r,r*2);
    return 0;   
}
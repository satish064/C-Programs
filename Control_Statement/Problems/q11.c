#include<stdio.h>
int main(void)
{
    int n,d,ld,occur=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter a digit: ");
    scanf("%d",&d);
    while(n>0)
    {
        ld = n % 10;
        if(d==ld) occur++;
        n/=10;
    }
    printf("Number of times digit occur = %d",occur);
    return 0;
}
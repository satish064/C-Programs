#include<stdio.h>
int main(void)
{
    int n,dec=0,po=1;
    printf("Enter a Binary number(1-0): ");
    scanf("%d",&n);
    while(n)
    {
        int ld = n % 10;
        dec += po*ld;
        n/=10;
        po*=2;
    }
    printf("Decimal = %d",dec);
    return 0;
}
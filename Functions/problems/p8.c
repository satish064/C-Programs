#include<stdio.h>
int func(int,int);
int main()
{
    int num,base,result;
    char choice;
    printf("Enter 'b' for binary or 'o' for octal : ");
    scanf("%c",&choice);
    printf("Enter a number: ");
    scanf("%d",&num);
    base = (choice=='b')?2:8;
    result = func(num,base);
    printf("Decimal number is %d\n",result);
    return 0;
}
int func(int n,int base)
{
    int rem,d,j=1,dec=0;
    while(n>0)
    {
        rem = n%10;
        d = rem*j;
        dec+=d;
        j*=base;
        n/=10;
    }
    return dec;
}
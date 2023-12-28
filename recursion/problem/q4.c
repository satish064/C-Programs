#include<stdio.h>
void Print(int n)
{
    if(n<1)
    return;
    else
    {
        Print(n-1);
        printf("%d",n);
    }
}
void main()
{
    Print(3);
}
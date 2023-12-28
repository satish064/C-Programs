#include<stdio.h>
void display1(int n)
{
    if(n==0)
    return;
    else
    {
        display1(n-1);
        printf("%d\t",n);
    }
    
}
void display2(int n)
{
    if(n==0)
    return;
    else
    {
        printf("%d\t",n);
        display2(n-1);
    }
}
int main()
{
    display1(5);
    printf("\n");
    display2(5);
    return 0;
}
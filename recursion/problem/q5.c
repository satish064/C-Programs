#include<stdio.h>
void f(int n)
{
    if(n<1)
    return;
    else{
        f(n-1);
        printf("%d",n);
        f(n-1); 
    }
}
void main()
{
    f(3);
}
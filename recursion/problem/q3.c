#include<stdio.h>
int Pow(int b,int e)
{
    if(e==1)
    return b;
    else
    return b*Pow(b,e-1);
}
int main()
{
    int Power = Pow(5,3);
    printf("%d",Power);
    return 0;
}
#include<stdio.h>
void PFactor(int num)
{
    int i = 2;
    if(num == 1)
    return;
    while(num%i!=0)
    i++;
    printf("%d ",i);
    PFactor(num/i);
}
int main()
{
    PFactor(84);
    return 0;
}
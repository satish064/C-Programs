#include<stdio.h>
int main(void)
{
    int n=0;
    for(int i = 1;i<=16;i=i+n)
    {
        printf("%d ",i);
        n++;
    }
    return 0;
}
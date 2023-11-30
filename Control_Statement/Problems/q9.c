#include<stdio.h>
int main(void)
{
    int i,j,d,r;
    for(i=1111;i<=9999;i++)
    {
        j=i,r=0,d=0;
        while(j>0)
        {
            d = j % 10;
            r = r * 10 + d;
            j /= 10;
        }
        if(i==r)
        printf("%d",i);
    }
    return 0;
}
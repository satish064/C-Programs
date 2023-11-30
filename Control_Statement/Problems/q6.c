#include<stdio.h>
int main(void)
{
    int j,i,sum=0,c;
    for(i=1;i<=100;i++)
    {
        c=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==1)
        printf("%d\t",i,j);
    }
    return 0;
}
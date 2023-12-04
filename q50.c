#include<stdio.h>
int main(void)
{
    int num,d1,d2,d3,n,o,p,k,i;
    for(num=100;num<=333;num++)
    {
        for(i=num;i<=num*3;i+=num)
        {
            k = i;
            d1 = k%10; k/=10;
            d2 = k%10; k/=10;
            d3 = k%10; k/=10;
            if(d1==d2 || d2==d3 || d3==d1)
            goto nextnum;
        }

        for(n=num;n>0;n/=10)
        {
            d1 = n%10;
            for(o=num*2;o>0;o/=10)
            {
                d2 = o%10;
                for(p=num*3;p>0;p/=10)
                {
                    d3=p%10;
                    if(d1==d2 || d2==d3 || d3==d1)
                    goto nextnum;
                }
            }
        } printf("%d\t%d\t%d\n",num,num*2,num*3);
        nextnum:;
    }
    
    return 0;
}
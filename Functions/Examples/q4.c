#include<stdio.h>
int sum(int x,int y);
int main(void)
{
    int a=10,b=20,k;
    k=sum(a,b);//30
    printf("%d\n",k);
    k=sum(4,5);//9
    printf("%d\n",k);
    k=sum(a+b,b*2);//30+20=50
    printf("%d\n",k);
    return 0;
}
int sum(int x,int y)
{
    int s;
    s=x+y;
    return s;
}

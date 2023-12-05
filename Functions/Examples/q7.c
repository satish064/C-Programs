#include<stdio.h>
void func(int a,int b);
int main(void)
{
    int x=10,y=20;
    func(x,y);
    printf("x=%d, y=%d",x,y);//10 20 
    return 0;
}
void func(int a,int b)
{
    a++;//11
    b--;//19
    printf("a=%d, b=%d\n",a,b);//11 19
}
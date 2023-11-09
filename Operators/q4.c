#include<stdio.h>
int main(void)
{
    int x = 8;
    printf("x = %d\t",x);//8
    printf("x=%d\t",x++);//8
    printf("x=%d\t",x);//9
    printf("x=%d\t",x--);//9
    printf("x=%d\n",x);//8
}
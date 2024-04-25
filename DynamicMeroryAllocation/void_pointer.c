#include<stdio.h>
int main(void)
{
    int a = 3;
    float b=3.4, *fp = &b;
    void *vp;
    vp=&a;
    printf("Value of a = %d\n",*(int *)vp);//3
    *(int *)vp = 12;
    printf("Value of a = %d\n",*(int *)vp);//12
    vp = fp;//3.4 &b
    printf("Value of b = %f\n",*(float *)vp);//3.4
    return 0;
}
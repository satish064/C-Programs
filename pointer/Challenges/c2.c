#include<stdio.h>
int main()
{
int num = 5;
int *nump = &num;
*nump = 10;
printf("%d",num);
}
#include<stdio.h>
int main(void)
{
    int a,b;
    printf("Enter values for  a and b : ");
    scanf("%d%d",&a,&b);
    
    if(a<b)
    printf("%d is less than %d\n",a,b);
    if(a<=b)
    printf("%d is less than %d\n",a,b);
    if(a==b)
    printf("%d is equal to %d\n",a,b);
    if(a!=b)
    printf("%d is not equal to %d\n",a,b);
    if(a>b)
    printf("%d is greater than %d\n",a,b);
    if(a>=b)
    printf("%d is greater than or equal to %d\n",a,b);
    return 0;
}
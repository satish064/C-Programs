#include<stdio.h>
int main(void)
{
    int n1,n2;
    printf("Enter two  numbers: ");
    scanf("%d%d",&n1,&n2);
    n1>n2?printf("Difference = %d",n1-n2):printf("Sum = %d",n1+n2);
    return 0;
}
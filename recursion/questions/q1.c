/* Write a recursive function to input and add n number */
#include<stdio.h>
int inputAndAdd(int n)
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(n==1)
    return a;
    return a+inputAndAdd(n-1);
}
int main()
{
    int n;
    printf("Enter the n numbers: ");
    scanf("%d",&n);
    printf("Sum = %d",inputAndAdd(n));
    return 0;
}
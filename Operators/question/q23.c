#include<stdio.h>
int main(void)
{
    int num,rem;
    printf("Enter the number : ");
    scanf("%d",&num);
    rem = num % 3;
    printf("Value after dividing by 3 : %d",rem);
    return 0;
}
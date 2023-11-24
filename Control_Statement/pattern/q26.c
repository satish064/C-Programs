#include<stdio.h>
int main(void)
{
    int num,dig,sum;
    printf("Enter a number: ");
    scanf("%d",&num);
    do
    {
        sum = 0;
        while(num!=0)
        {
            dig = num%10;
            sum += dig;
            num/=10;
        }
        num = sum; 
        printf("%d\t",num);
    } while (num/10!=0);
    
}
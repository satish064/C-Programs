#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2==0)
    goto even;
    else
    goto odd;
    
    even:
    printf("Number is even");
    goto end;
    odd:
    printf("Number is odd");
    goto end;
    end:
    printf("\n");
    return 0;
}
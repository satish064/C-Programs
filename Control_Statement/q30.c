#include<stdio.h>
int main(void)
{
    int i=1,n,sum=0;
    float avg;
    printf("Enter 10 positive numbers: \n");
    while(i<=10)
    {
    printf("Enter number %d : ",i);
    scanf("%d",&n);
    if(n<0)
    {
        printf("Enter only positive number\n");
        continue;
    }
    sum+=n;
    i++;
    }
    avg=sum/10.0;
    printf("Sum=%d Avg=%f\n",sum,avg);
    return 0;
}
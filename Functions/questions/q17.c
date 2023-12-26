#include<stdio.h>
int isLeap(int);
int main(void)
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if(isLeap(year))
    printf("%d Year is Leap",year);
    else
    printf("%d Not a Leap year",year);
    return 0;
}
int isLeap(int n)
{
    if(n%100!=0 && n%4==0 || n%400==0)
    return 1;
    return 0;
}
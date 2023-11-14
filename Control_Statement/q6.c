#include<stdio.h>
int main(void)
{
    int y;
    printf("Enter a year: ");
    scanf("%d",&y);
    if(y%100 != 0)
    {
        if(y%4 == 0)
        printf("Leap year\n");
        else
        printf("Not leap");
    }
    else
    {
        if(y%400==0)
        printf("Leap year");
        else
        printf("Not leap");
    }
    return 0;
}
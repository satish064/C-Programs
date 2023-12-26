#include<stdio.h>
int cmpdate(int,int,int,int,int,int);
int main(void)
{
    int m1,m2,y1,y2,d1,d2;
    printf("Enter a date1(dd/mm/yyyy): ");
    scanf("%d/%d/%d",&d1,&m1,&y1);
    printf("Enter a date2(dd/mm/yyyy): ");
    scanf("%d/%d/%d",&d2,&m2,&y2);
    int cmp = cmpdate(d1,d2,m1,m2,y1,y2);
    if(cmp == 1)
        printf("date 1 is before date 2");
    else if(cmp == -1)
        printf("date 2 is before date 1");
    else
        printf("Both dates are same");
    return 0;
}
int cmpdate(int d1,int d2,int m1,int m2,int y1,int y2)
{
    if(y1>y2)
    return -1;
    if(y2>y1)
    return 1;
    if(m1>m2)
    return -1;
    if(m2>m1)
    return 1;
    if(d1>d2)
    return -1;
    if(d2>d1)
    return 1;
    return 0;
}
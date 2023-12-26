#include<stdio.h>
int isLeap(int);
int isValid(int,int,int);
int main(void)
{
    int d,m,y;
    printf("Enter a date(dd/mm/yyyy) : ");
    scanf("%d/%d/%d",&d,&m,&y);
    if(isValid(d,m,y))
    printf("Date is Valid");
    else
    printf("Date is not Valid");
    return 0;
}
int isLeap(int d)
{
    if(d%100!=0 && d%4==0 || d%400==0)
    return 1;
    else
    return 0;
}
int isValid(int d,int m,int y)
{
    if(d<=1 || d>=31 && m<=1 || m>=12 && y<=1)
    return 0;
    if(m==4 || m==6 || m==9 || m==11)
    {
        if(d<=30)
        return 1;
        else
        return 0;
    }
    else if(m==2)
    {
        if(isLeap(y)==1 && d!=30 && d!=31)
        return 1;
        else 
        return 0;
    }
    else
    {
        if(d<=31)
        return 1;
        else return 0;
    }
}
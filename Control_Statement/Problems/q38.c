#include<stdio.h>
int main(void)
{
    int m1,m2,m,y1,y2,y,d1,d2,d;
    printf("Enter the first date(dd/mm/yyyy): ");
    scanf("%d/%d/%d",&d1,&m1,&y1);
    printf("Enter the second date(dd/mm/yyyy): ");
    scanf("%d/%d/%d",&d2,&m2,&y2);
    if(d2<d1)
    {
        if(m2==3)
        {
            if(y2%100!=0 && y2%400==0 || y2%4==0)
            d2+=29;
            else
            d2+=28;
        }
        else if(m2==4 || m2==6 || m2==9 || m2==11)
        d2+=30;
        else
        d2+=31;
        m2-=1;
    }
    if(m2<m1)
    {
        y2-=1;
        m2+=12;
    }
    y=y2-y1;
    d=d2-d1;
    m=m2-m1;
    printf("The difference of the two dates is : ");
    printf("%d years %d months %d days",y,m,d);
    return 0;
}
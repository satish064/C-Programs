#include<stdio.h>
int main(void)
{
    /*int i;
    for(i=1;i<=5 ;i++)
    {
        printf("%d ",i);
    }*/
    
    int i=1,j=3;
    while(i<5)
    {
        if(j==0)
        goto end;
        printf("%d ",i++,j--);
    }
    end: ;
    return 0;
}
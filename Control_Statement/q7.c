#include<stdio.h>
int main(void)
{
    int m1,m2,m3,m4,per;
    printf("Enter the 4 marks of student: ");
    scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
    per = (m1+m2+m3+m4)/4;
    printf("%d",per);
    if(per>=85) printf("A");
    else if(per>=70) printf("B");
    else if(per>=55) printf("C");
    else if(per>=40) printf("D");
    else printf("E");
    return 0;
}
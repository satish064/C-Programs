#include<stdio.h>
int main(void)
{
    float m1,m2,m3,m4,m5,per;
    printf("Enter the 5 sub marks: ");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    per = (m1+m2+m3+m4+m5)/500*100;
    printf("Percentage = %.2f",per);
    return 0;
}
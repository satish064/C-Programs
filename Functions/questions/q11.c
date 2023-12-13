#include<stdio.h>
float convert(float,char);
int main(void)
{
    float len;
    printf("Enter length inches : ");
    scanf("%f",&len);
    printf("Length in cms = %f\n",convert(len,'i'));
    printf("Enter the cms: ");
    scanf("%f",&len);
    printf("Lenght in inches = %f\n",convert(len,'c'));

    return 0;
}
float convert(float n,char c)
{
   return c=='i'?n*2.54:n/2.54;
}
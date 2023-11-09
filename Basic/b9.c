#include<stdio.h>
int main()
{
    int day,month,year;
    int basic;
    printf("Enter the date(dd-mm-yyyy): ");
    scanf("%d-%d-%d",&day,&month,&year);
    printf("Enter your basic salary : ");
    scanf("%d",&basic);
    printf("Entered date is: %d-%d-%d\n",day,month,year);
    printf("The salary is : %d",basic);
    return 0;
}
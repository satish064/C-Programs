#include<stdio.h>
int main()
{
    int basic;
    float hra;
    char grade;
    printf("Enter a basic salary , hra, grade :");
    scanf("%d%f%c",&basic,&hra,&grade);
    printf("basic salary is : %d hra: %f grade : %c",basic,hra,grade);
    return 0;
}
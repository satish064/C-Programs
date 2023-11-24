#include<stdio.h>
int main(void)
{
    char op;
    int a,b;
    printf("Enter number,operator and another number : ");
    scanf("%d%c%d",&a,&op,&b);
    switch(op)
    {
        case '+':
        printf("%d + %d = %d",a,b,a+b);
        break;
        case '-':
        printf("%d - %d = %d",a,b,a-b);
        break;
        case 'x':
        case 'X':
        case '*':
        printf("%d * %d = %d",a,b,a*b);
        break;
        case '/':
        printf("%d / %d = %d",a,b,a/b);
        break;
        default:
        printf("Wrong operator");
    }
    return 0;
}
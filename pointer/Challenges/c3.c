#include<stdio.h>
int main()
{
    char name;
    char *p = &name;
    printf("Enter a character: ");
    scanf("%c",&(*p));
    printf("Character That you Entered: %c",*p);
}
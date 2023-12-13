#include<stdio.h>
int AlphaNumeric(char);
int isAlphabet(char);
int isNumeric(char);
int main(void)
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    if(AlphaNumeric(ch))
        printf("%c Is AlphaNumeric number",ch);
    else
    printf("%c is Not a AlphaNumeric number",ch);

    return 0;
}
int isAlphabet(char ch)
{
    return (ch>=65 && ch<=90 || ch>=97 && ch<=112);
}
int isNumeric(char ch)
{
    return (ch>=48 && ch<=57);
}
int AlphaNumeric(char ch)
{
    return (isNumeric || AlphaNumeric);
}
#include<stdio.h>
int main(void)
{
    char ch;
    printf("Enter an alphabet : ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("Alphabet is vowel");
        break;
        default:
        printf("Alphabet is constent");
    }
    return 0;
}
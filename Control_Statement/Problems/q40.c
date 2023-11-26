#include<stdio.h>
int main(void)
{
    int n,choice,notes;
    printf("Enter the total amount in Rs: ");
    scanf("%d",&n);
    printf("Enter the value of note from which you want to begin : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 100:
        notes=n/100;
        printf("Number of 100 Rs notes = %d\n",notes);
        n%=100;
        
        case 50:
        notes=n/50;
        printf("Number of 50 Rs notes = %d\n",notes);
        n%=50;

        case 20:
        notes=n/20;
        printf("Number of 20 Rs notes = %d\n",notes);
        n%=20;

        case 10:
        notes = n/10;
        printf("Number of 10 Rs notes = %d\n",notes);
        n%=10;

        case 5:
        notes = n/5;
        printf("Number of 5 Rs notes = %d\n",notes);
        n%=5;
        
        case 2:
        notes = n/2;
        printf("Number of 2 Rs notes = %d\n",notes);
        n%=2;

        case 1:
        notes=n/1;
        printf("Number of 1 Rs notes = %d\n",notes);
        break;

        Default:
        printf("Enter only valid values");
        break;
    }
    printf("\n");
    return 0;
}
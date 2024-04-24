#include<stdio.h>

struct Student 
{
    int rollno;
    char name[10];
    float marks;
};

int main() 
{
    // Initializing an array of Student structures
    struct Student student = 
        {1, "Satish", 90.5};
        
    struct Student *studentPtr = &student;

    
        printf("Roll Number: %d\n",studentPtr->rollno);
        printf("Name: %s\n",studentPtr->name);
        printf("Marks: %.2f\n\n",studentPtr->marks);
    
    return 0;
}
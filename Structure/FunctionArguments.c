#include<stdio.h>

struct Student 
{
    int rollno;
    char name[10];
    float marks;
};

void printStudentPointer(struct Student *s)
{
    printf("Student Details:\n");
    printf("Roll Number: %d\n",s->rollno);
    printf("Roll Number: %d\n",s->rollno);
    printf("Name: %s\n",s->name);
    printf("Marks: %.2f\n",s->marks);
}

void printStudent(struct Student s) 
{
     printf("Student Details:\n");
    printf("Roll Number: %d\n",s.rollno);
    printf("Roll Number: %d\n",s.rollno);
    printf("Name: %s\n",s.name);
    printf("Marks: %.2f\n",s.marks);
}
int main() 
{
    // Initializing an array of Student structures
    struct Student student = 
        {1, "Satish", 90.5};

    struct Student *studentPtr = &student;
    printStudentPointer(studentPtr);
    printStudent(student);

    return 0;

}
#include<stdio.h>
#include<string.h>

//user defined
struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {50,10,"bhaskar"};
    printf("student roll = %d\n", s1.roll);

    struct student *ptr = &s1;
    printf("student.roll = %d\n", (*ptr).roll);

    printf("student->roll = %d\n", ptr->roll);
    printf("student->name = %S\n", ptr->name);
    printf("student->cgpa = %f\n", ptr->cgpa);

    
    
    return 0;
}
//TYPEDEF -> used to create alias for data tyes

#include<stdio.h>
#include<string.h>

typedef struct student {
    int roll;
    float cgpa;
    char name[100];
} stu;

typedef struct electonicsandtelecommunicationengineering {
    int roll;
    float cgpa;
    char name[100];
} ece;

int main(){
    ece s1;
    s1.roll = 50;
    s1.cgpa = 10;
    strcpy(s1.name,"bhaskar");

    printf("student name is %s\n", s1.name);
    return 0;
}

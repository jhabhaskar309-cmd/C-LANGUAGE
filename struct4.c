#include<stdio.h>
#include<string.h>


struct student {
    int roll;
    float cgpa;
    char name[100];
};

void printinfo(struct student s1);

int main(){
    struct student s1 = {50,10,"bhaskar"};
    printinfo(s1);
    return 0;

}

void printinfo(struct student s1){
    printf("student information : \n");
    printf("student.roll = %d\n", s1.roll);
    printf("student.name = %s\n", s1.name);
    printf("student cgpa = %f\n", s1.cgpa);

}
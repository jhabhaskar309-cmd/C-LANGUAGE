// STRUCTURE - a collection of values of different data types

#include<stdio.h>
#include<string.h>

//user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    s1.roll = 50;
    s1.cgpa = 10;
    strcpy(s1.name,"bhaskar");

    printf("student name = %s\n", s1.name);
    printf("student roll no = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);


    struct student s2;
    s2.roll = 56;
    s2.cgpa = 7.5;
    strcpy(s2.name,"deba");

    printf("student name = %s\n", s2.name);
    printf("student roll no = %d\n", s2.roll);
    printf("student cgpa = %f\n", s2.cgpa);


    struct student s3;
    s3.roll = 51;
    s3.cgpa = 8.0;
    strcpy(s3.name,"bhawin");

    printf("student name = %s\n", s3.name);
    printf("student roll no = %d\n", s3.roll);
    printf("student cgpa = %f\n", s3.cgpa);

    return 0;
}
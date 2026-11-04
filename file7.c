#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Student.txt","w");

    char name[100];
    int age;
    float cgpa;

    printf("enter name:");
    scanf("%s",name);
    printf("enter age:");
    scanf("%s", &age);
    printf("enter cgpa:");
    scanf("%s",&cgpa);

    fprintf(fptr,"%s\t", name);
    fprintf(fptr, "%d\t", age);
    fprintf(fptr, "%f\t", cgpa);
    
    fclose(fptr);
}
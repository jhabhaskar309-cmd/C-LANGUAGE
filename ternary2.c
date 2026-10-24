#include <stdio.h>
int main(){
    int marks;
    printf("enter a marks");
    scanf("%d",&marks);

    // if(marks<30) {
    //     printf("fail \n");
    // }  else if(marks > 30 && marks <= 100) {
    //     printf("pass");
    // }
    // else{
    //     printf("wrong marks");
    // }

marks <=30 ? printf("fail") : printf ("pass");
    return 0;

}
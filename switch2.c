#include <stdio.h>
int main(){
    int marks;
    printf("enter a marks");
    scanf("%d",&marks);

    if(marks<30) {
        printf("fail \n");
    }
    else{
        printf("pass");
    }
    return 0;

}
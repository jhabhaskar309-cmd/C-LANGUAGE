#include <stdio.h>
int main(){

    int age;
    printf("enter age");
    scanf("%d",&age);

    if(age>18) {
        printf("adult \n");
        printf("they can vote \n");
        printf("they can drive \n");
    }
    else {
    printf("minor \n");
    }

    printf("thank you");
    return 0;
}
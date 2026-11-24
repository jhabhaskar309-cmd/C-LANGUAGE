//nested and multiple ifs

#include<stdio.h>
int main(void){
    int a,b;
    printf("enter two integers");
    scanf("%d %d", &a, &b);
    if(a==b){
        printf("%d is equal to %d\n",a,b);
    }else {
        if(a>b)
          printf("%d is greater than %d\n",a,b);
        else
          printf("%d is less than %d\n",a,b);
    }
    if(a != b) printf("the numbers are different.\n");
    if(a >= b) printf("first number is not smaller.\n");
    if(a <= b) printf("first number is not greater.\n");
    return 0;
}
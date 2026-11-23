//menu-driven number classification

#include<stdio.h>
int main(void){
    int choice,n,i,isprime = 1;
    printf("1. prime/composite\n2.even/odd\nenter choice:");
    scanf("%d",&choice);
    printf("enter a number:");
    scanf("%d",&n);
    switch(choice){
     case 1:
        if(n<=1)isprime = 0;
        for(i=2; i*i <= n && isprime;i++)
          if(n % i== 0)isprime = 0;
        if(n <= 1) printf("neither prime nor composite.\n");
        else printf(isprime ?"prime number.\n": "composite number.\n");
        break;
     case 2:
        switch(n % 2){
            case 0: printf("even number.\n"); break;
            default:printf("odd number.\n");
        }
        break;
        default: printf("invalid choice.\n");
    }
    return 0;
}
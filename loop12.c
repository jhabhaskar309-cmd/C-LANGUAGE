#include<stdio.h>
int main(){
    int n;
    do {
        printf("enter a number");
        scanf("%d",&n);
        printf("%d \n", n);

        if( n % 2 != 0){
            break;  //exit loop if odd
        }
     } while(1);  //repeat until odd number is entered
        printf("thank you");
    
    return 0;
}
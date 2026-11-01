#include <stdio.h>
int sum(int a, int b);
void printable(int n);

int main(){
    int n;
    printf("enter first number :");
    scanf("%d",&n);
    printable(n); //argument/actual parameter
    return 0;
}

    
void printable(int n) { //parameter/formal parameter
    for(int i=1;i<=10;i++){
    printf("%d \n",i*n);
    }
}
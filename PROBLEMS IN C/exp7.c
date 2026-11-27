//user-defined functions

#include<stdio.h>
int add(int a,int b){
    return a+b;
}
int iseven(int n){
    return n % 2 == 0;
}
int main(void){
    int x,y,n;
    printf("enter two integers: ");
    scanf("%d %d",&x, &y);
    printf("sum = %d\n",add(x,y));
    printf("enter a number");
    scanf("%d",&n);
    printf(iseven(n) ? "even number.\n":"odd number.\n");
    return 0;
}
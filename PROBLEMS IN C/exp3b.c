//ternary maximum

#include<stdio.h>
int main(void){
    int x,y,maximum;
    printf("enter two integers:");
    scanf("%d %d",&x , &y);
    maximum = (x>y)?x:y;
    printf("maximum = %d\n",maximum);
    return 0;
}
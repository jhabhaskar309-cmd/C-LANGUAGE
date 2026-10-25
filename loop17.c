#include <stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d \n",&n);

    for(int i=10; i>=1; i--){
    printf("%d \n", n*i);
    }
    return 0;
}
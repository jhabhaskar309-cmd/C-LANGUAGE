//goto statement

#include<stdio.h>
int main(void){
    int n;
read_again:
    printf("enter a non-negative integer:");
    scanf("%d",&n);
    if(n < 0){
        printf("negative value is not accepted. try again.\n");
        goto read_again;
    }
    printf("accepted value = %d\n", n);
    return 0;
}
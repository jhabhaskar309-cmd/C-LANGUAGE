//for,while and do-while loops

#include<stdio.h>
int main(void){
    int n,i;
    printf("enter n:");
    scanf("%d",&n);
    printf("for loop  :");
    for(i=1; i<=n; i++) printf("%d",i);
    printf("\nwhileloop :");
    i=1;
    while(i<=n)  {printf("%d",i);i++;}
    printf("\ndo-while loop: ");
    i=1;
    do{printf("%d",i);i++;}while(i<=n);
    printf("\n");
    return 0;
}
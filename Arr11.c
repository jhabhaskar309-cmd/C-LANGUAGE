<<<<<<< HEAD
//first n fibonacci numbers

#include<stdio.h>

int main(){
    int n;
    printf("enter n (n>2): ");
    scanf("%d", &n);

    int fib[n];
    fib[0]=0;
    fib[1]=1;
    
    for(int i=2; i<n; i++){
        fib[i]= fib[i-1] + fib[i-2];   //important in fib
        printf("%d\t", fib[i]);
    }
    printf("\n");
    return 0;
=======
//first n fibonacci numbers

#include<stdio.h>

int main(){
    int n;
    printf("enter n (n>2): ");
    scanf("%d", &n);

    int fib[n];
    fib[0]=0;
    fib[1]=1;
    
    for(int i=2; i<n; i++){
        fib[i]= fib[i-1] + fib[i-2];   //important in fib
        printf("%d\t", fib[i]);
    }
    printf("\n");
    return 0;
>>>>>>> 87e00ee52159498057f87b0ab6b0b4f4addda950
}
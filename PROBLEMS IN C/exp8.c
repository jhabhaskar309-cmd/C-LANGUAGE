//factorial and GCD using both approaches

#include<stdio.h>
unsigned long long factlter(int n){
    unsigned long long f=1;
    for (int i=2; i<=n; i++) f*=i;
    return f;
}
unsigned long long factrec(int n){
    return(n<=1)? 1 : (unsigned long long)n*factrec(n-1);
}
int gcdlter(int a,int b){
    while(b != 0){
        int r = a%b;
        a=b;
        b=r;
    }
    return a;
}
int gcdrec(int a,int b){
    return (b==0)? a : gcdrec(b,a%b);
}
int main(void){
    int n,a,b;
    printf("enter n for factorial: ");
    scanf("%d", &n);
    printf("iterative factorial = %llu\n",factlter(n));
    printf("recursive,factorial = %llu\n",factrec(n));
    printf("enter two integers for gcd: ");
    scanf("%d %d",&a,&b);
    printf("iterative gcd = %d\n",gcdlter(a,b));
    printf("recursive gcd = %d\n",gcdrec(a,b));
    return 0;
}
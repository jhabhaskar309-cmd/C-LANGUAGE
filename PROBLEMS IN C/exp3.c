//bitwise operators

#include<stdio.h>
int main(void){
    unsigned int a,b;
    printf("enter two non-negative integers:");
    scanf("%u %u",&a,&b);
    printf("a&b = %u\n",a&b);
    printf("a|b = %u\n",a|b);
    printf("a^b = %u\n",a^b);
    printf("~a = %u\n", ~a);
    printf("a<<1 = %u\n",a<<1);
    printf("a>>1 = %u\n",a>>1);
    return 0;
}
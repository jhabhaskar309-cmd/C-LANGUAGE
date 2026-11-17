//sizes of data types

#include<stdio.h>
int main(void){
    int i = 10;
    float f = 12.5f;
    double d = 25.125;
    char c = 'A';
    printf("int :value = %d, size=%zu bytes\n",i,sizeof(i));
    printf("float : value=%.2f,size=%zu bytes\n",f,sizeof(f));
    printf("double :value=%.3lf,size=%zu bytes\n",d,sizeof(d));
    printf("char  :value=%c,size=%zu byte\n",c,sizeof(c));
    return 0;
}
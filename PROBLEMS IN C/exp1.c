//format specifiers

#include<stdio.h>
int main(void){
    int i;
    float f;
    double d;
    char ch;
    char name[30];
    unsigned int u;
    printf("enter int, float, double, char, string and unsigned int:\n");
    scanf("%d %f %lf %c %29s %u", &i, &f, &d, &ch, name, &u);
    printf("integer  :%d\n",i);
    printf("float  :%.2f\n",f);
    printf("double  :%.3lf\n",d);
    printf("character  :%c\n",ch);
    printf("string  :%s\n",name);
    printf("Unsigned  :%u\n", u);
    printf("hexadecimal  :%x\n",u);
    printf("octal  :%o\n",u);
    return 0;
}
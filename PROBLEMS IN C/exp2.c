//mathematical operators

#include<stdio.h>
int main(void){
    int a,b;
    float x,y;
    printf("enter two integers: ");
    scanf("%d%d",&a,&b);
    printf("a+b = %d\n",a+b);
    printf("a-b = %d\n",a-b);
    printf("a*b = %d\n", a*b);
    if(b != 0){
        printf("a/b = %.2f\n", (float)a/b);
        printf("a %% b = %d\n", a%b);
    }
    
printf("enter two real numbers:");
scanf("%f %f", &x, &y);
printf("x+y = %.2f\n",x+y);
printf("x*y = %.2f\n",x*y);
return 0;
}
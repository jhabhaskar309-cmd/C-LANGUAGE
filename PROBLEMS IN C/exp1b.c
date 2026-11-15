//quadratic roots

#include<stdio.h>
#include<math.h>
int main(void){
    double a,b,c,D,r1,r2,realPart,imagePart;
    printf("enter coefficients a,b,c:");
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a==0){
        printf("not a quadratic equation.\n");
        return 0;
    }
    D = b * b - 4 * a * c;
    if (D>0){
        r1 = (-b + sqrt(D)) / (2*a);
        r2 = (-b - sqrt(D)) / (2*a);
        printf("two real roots: %.2lf and %.2lf\n",r1, r2);
}else if (D==0){
    r1 = -b/(2*a);
    printf("equal real roots: %.2lf and %.2lf\n",r1, r1);
}else{
    realPart = -b/(2*a);
    imagePart = sqrt(-D)/(2*a);
    printf("complex roots: %.2lf + %.2lfi and %.2lf - %.2lfi\n",realPart,imagePart,realPart,imagePart);
}
return 0;
    
}
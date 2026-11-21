//if-else, relational and logical operators

#include<stdio.h>
int main(void){
    int age,citizen;
    printf("enter age and citizenship flag(1=yes,0=no):");
    scanf("%d %d",&age, &citizen);
    printf("age >=18 is %d\n",age >= 18);
    printf("citizen == 1 is %d\n",citizen ==1);
    if(age >= 18 && citizen == 1)
      printf("eligible to vote.\n");
      else
      printf("not eligible to vote.\n");
      return 0;
}
<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

void calculateprice(float value);

int main(){
int n = 4;
printf("%f",pow(n,2));

return 0;
}
void calculateprice(float value){
    value = value + (0.18*value);
    printf("final price is : %f \n", value);
=======
#include <stdio.h>
#include <math.h>

void calculateprice(float value);

int main(){
int n = 4;
printf("%f",pow(n,2));

return 0;
}
void calculateprice(float value){
    value = value + (0.18*value);
    printf("final price is : %f \n", value);
>>>>>>> 87e00ee52159498057f87b0ab6b0b4f4addda950
}
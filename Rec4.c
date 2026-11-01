<<<<<<< HEAD
#include <stdio.h>
 float convertTemp(float celsius);

 int main() {
    float far = convertTemp(37);
    printf("far : %f",far);
    return 0;
 }
 float convertTemp(float celsius) {
    float far = celsius * (9.0/5.0) + 32;
    return far;
=======
#include <stdio.h>
 float convertTemp(float celsius);

 int main() {
    float far = convertTemp(37);
    printf("far : %f",far);
    return 0;
 }
 float convertTemp(float celsius) {
    float far = celsius * (9.0/5.0) + 32;
    return far;
>>>>>>> 87e00ee52159498057f87b0ab6b0b4f4addda950
 }
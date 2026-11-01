<<<<<<< HEAD
#include <stdio.h>
int fact(int n);

int main(){
    printf("factorial is : %d",fact(5));
    return 0;

}
 int fact(int n){
    if(n==0){
        return 1;
    }
    int factNm = fact(n-1);
    int factN = factNm * n;
    return factN;
=======
#include <stdio.h>
int fact(int n);

int main(){
    printf("factorial is : %d",fact(5));
    return 0;

}
 int fact(int n){
    if(n==0){
        return 1;
    }
    int factNm = fact(n-1);
    int factN = factNm * n;
    return factN;
>>>>>>> 87e00ee52159498057f87b0ab6b0b4f4addda950
 }
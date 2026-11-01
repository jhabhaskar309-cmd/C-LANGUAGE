<<<<<<< HEAD
#include <stdio.h>
int sum(int n);

int main(){
    printf("sum is : %d",sum(5));
    return 0;

}

//recurive function
int sum(int n){
    if (n==1){
        return 1;
    }
    int sumNm1 = sum(n-1); //sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
=======
#include <stdio.h>
int sum(int n);

int main(){
    printf("sum is : %d",sum(5));
    return 0;

}

//recurive function
int sum(int n){
    if (n==1){
        return 1;
    }
    int sumNm1 = sum(n-1); //sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
>>>>>>> 87e00ee52159498057f87b0ab6b0b4f4addda950
}
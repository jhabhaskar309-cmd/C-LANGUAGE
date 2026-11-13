//sum of an array using function

#include<stdio.h>

int sum(int arr[], int length);

int main(void){
    int arr[] = {1,2,3,4,5,6};

    printf("arr[] sum : %d\n", sum(arr,6));

  return 0;
}

int sum(int arr[], int length){
    int sum = 0;
     
     for(int i = 0; i<length; i++){
        sum += arr[i];

     }
      return sum;
}
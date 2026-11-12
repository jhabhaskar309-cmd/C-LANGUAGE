//sum the values in array

#include<stdio.h>

int main(void){
    int array[] = {1,2,3,4,5,6};
    int sum = 0;

    for(int i = 0; i<6; i++){
        sum += array[i];
        printf("sum so far: %d\n",sum);
    }
    printf("sum = %d",sum);
  return 0; 
}

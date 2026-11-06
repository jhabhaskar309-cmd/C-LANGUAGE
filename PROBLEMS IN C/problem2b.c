//finding maximum number in array using function

#include<stdio.h>

int find_max(int array[], int length);

int main(void){
    int array[] = {5,9,10,11,4,3,1,6,7};

    int max = find_max(array, 9);

    printf("Maximum : %d\n", max);
    return 0;
}

int find_max(int array[], int length){
    int max;
    max = array[0];
    for(int i = 1; i < length ; i++){
        if (array[i] > max){
    max = array[i];
    }
  }
    return max;
}
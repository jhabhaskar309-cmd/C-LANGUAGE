//finding minimum number in array using function

#include<stdio.h>

int find_min(int array[], int length);

int main(void){
    int array[] = {5,9,10,11,4,3,1,6,7};

    int min = find_min(array, 9);

    printf("Minimum : %d\n", min);
    return 0;
}

int find_min(int array[], int length){
    int min;
    min = array[0];
    for(int i = 1; i < length ; i++){
        if (array[i] < min){
    min = array[i];
    }
  }
    return min;
}

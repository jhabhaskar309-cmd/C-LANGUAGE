#include<stdio.h>
int find_max(int array[], int length);

int main(void){
    int array[]= {3,4,5,6,7};
    int max = find_max(array,5);

    printf("Maximum : %d\n",max);
    return 0;
}

int find_max(int array[], int length){
    int max;
    max= array[0];
    for(int i = 1; i < length; i++){
        if(array[i] > max){
            max = array[i];

        }
    }
    return max;
}

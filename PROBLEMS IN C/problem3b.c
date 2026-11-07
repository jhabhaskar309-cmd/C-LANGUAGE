//counting the occurrences of a value in an array using funtction

#include<stdio.h>

int occurrences(int array[],int length, int to_find);

int main(void){
    int array1[] = {2,3,4,5,6,7,5,3,5,2};
    int array2[] = {0,0,4,3,2,2,4,4,3,5};

    int findarr1_5 = occurrences(array1,10,5);
    int findarr2_4 = occurrences(array2,10,4);

    printf("# of 5s found in array1: %d\n", findarr1_5);
    printf("# 0f 4s found in array2: %d\n", findarr2_4);

    return 0;
}

int occurrences(int array[],int length, int to_find){
    int count = 0;

    for (int i = 0; i<length; i++){
        if (array[i] == to_find) count++;
    }
        return count;
    
}

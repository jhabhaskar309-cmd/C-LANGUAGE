//counting the occurrences of a value in an array

#include<stdio.h>

int main(void){

    int myarray[] = {2,3,4,5,6,7,5,3,5,2};
    int count = 0;
    int to_find = 5;

    for(int i = 0; i<10; i++){
        if(myarray[i] == to_find) count++;
    }
    printf("number of 5s found: %d\n", count);

    return 0;
}
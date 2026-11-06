//finding maximum number in array

#include<stdio.h>

int main(void){
    int myarray[] = {2,3,4,1,5,3};
    int max = myarray[0];

    for(int i = 1; i<6; i++){
        if(myarray[i] > max){
            max = myarray[i];
        }
    }
    printf("Maximum: %d\n", max);
    return 0;
}
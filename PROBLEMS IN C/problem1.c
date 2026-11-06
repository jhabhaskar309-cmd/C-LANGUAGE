//finding minimum number in array

#include<stdio.h>

int main(void){
    int myarray[] = {2,3,4,1,5,3};
    int min = myarray[0];

    for(int i = 1; i<6; i++){
        if(myarray[i] < min){
            min = myarray[i];
        }
    }
    printf("Minimum: %d\n", min);
    return 0;
}

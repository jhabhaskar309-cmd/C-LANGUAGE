#include<stdio.h>

void reverse(int array[], int length);

int main(void){
    int myarray1[] = {1,2,3,4,5,6,7,8,9};
    int myarray2[] = {6,5,4,3,2,1};

    reverse(myarray1,9);
    reverse(myarray2,6);


    for(int i = 0; i < 9 ;i++ ){
        printf("myarray1[%d] = %d\n",i, myarray1[i]);
    }
       
    printf("\n");

    for(int i = 0; i<6; i++){
        printf("myarray2[%d] = %d\n", i , myarray2[i]);
    }
    return 0;
    

}

    void reverse(int array[], int length){
        int temp = 0;

        for(int i = 0 ; i < (length/2); i++){
            temp = array[i];
            array[i] = array[length - i - 1];
            array[length - i - 1] = temp;

        }
    }

//ARRAYS AS FUNCTION ARGUMENT 

//Function declaration
//void printnumbers(int arr[],int n)
 //or
//void printnumbers(int*arr,int n)

//Function call
//printnumbers(arr,n);

#include <stdio.h>
int printnumbers(int arr[], int n);

int main(){
    int arr[] = {1,2,3,4,5,6};
    printnumbers(arr,6);
    return 0;
}
int printnumbers(int arr[],int n){
    for(int i=0; i<n; i++){
      printf("%d \t",arr[i]);
}
printf("\n");
}

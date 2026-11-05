//dynamic memory allocation - it is a way to allocate memory to a data structure during the runtime
//we need some functions to allocate & free memory dynamically

//Functions for DMA 
//1. malloc() - memory allocation
//            - takes no. of bytes to be allocated & returns a pointer of type void
//   syntax - (*int)malloc(5*sizeof(int));

#include<stdio.h>
int main(){
    printf("%d\n", sizeof(int));
     printf("%d\n", sizeof(float));
      printf("%d\n", sizeof(char));
      return 0;
      
}


//2. calloc() - continuous allocation
//              intializes with 0
//   ptr = (*int) calloc(5,sizeof(int));


//3. free()
//4. realloc() - re allocation
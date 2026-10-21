#include <stdio.h>
int main(){
    // float price = 100.0;
    // float *ptr = &price;
    // float **pptr = &ptr;

    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("i %d",&**pptr);
    return 0;
}
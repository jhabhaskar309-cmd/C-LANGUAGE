//opening a file
//FILE *fptr;
//fptr = fopen("filename",mode);

//closing a file
//fclose(fptr);

//"r" - open to read
//"rb" - open to read in library
//"w" - open to write
//"wb - open to write in binary"
//"a" - open to append
#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("NewText.txt", "r");
    if(fptr == NULL){
        printf("file doesn't exist\n");
    }else {
    fclose(fptr);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>

void printstring(char arr[]);
int countlength(char arr[]);

int main(){
    char name[] = "BHASKAR";
    int length = countlength(name);
    printf("length is : %d",length);
    return 0;
}

int countlength(char arr[]){
    int count = 0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count;
}

void printstring(char arr[]){
    for(int i=0; arr[i] !='\0'; i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}
<<<<<<< HEAD
//RECURSION - when a function calls itself

#include <stdio.h>

void printHW(int count);

int main(){
    printHW(5);
    return 0;

}

//recursive function
void printHW(int count) {
    if(count == 0){
        return;
    }
    printf("Hello World \n");
    printHW(count-1);

=======
//RECURSION - when a function calls itself

#include <stdio.h>

void printHW(int count);

int main(){
    printHW(5);
    return 0;

}

//recursive function
void printHW(int count) {
    if(count == 0){
        return;
    }
    printf("Hello World \n");
    printHW(count-1);

>>>>>>> 87e00ee52159498057f87b0ab6b0b4f4addda950
}
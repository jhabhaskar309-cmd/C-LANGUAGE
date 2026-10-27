// block of code that performs particular task
// syntax 1  
//  fuction prototype
//  void printhello();

//2. Function Definition
// void printhello(){
// printf("HELLO");
// }

//3. Function call
//   int main(){
//      printHello():
//      return 0;
//    }


#include <stdio.h>
//declaration/prototype
void printHello();

int main(){
    printHello(); //function call
    printHello(); //function call
    printHello(); //function call

    return 0;
}

//fuction definition 
void printHello(){
    printf("hello !\n");
    printf("my name is juhi jha\n");
}
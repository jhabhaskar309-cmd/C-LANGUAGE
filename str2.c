<<<<<<< HEAD
#include<stdio.h>
void printstring(char arr[]);

int main() {
    char firstname[] = "BHASKAR";
    char lastname[] = "JHA";

    printstring(firstname);
    printstring(lastname);
    return 0;

}

void printstring(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");

}
=======
#include<stdio.h>
void printstring(char arr[]);

int main() {
    char firstname[] = "BHASKAR";
    char lastname[] = "JHA";

    printstring(firstname);
    printstring(lastname);
    return 0;

}

void printstring(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");

}
>>>>>>> 87e00ee52159498057f87b0ab6b0b4f4addda950

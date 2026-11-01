#include <stdio.h>
#include <string.h>

void printstring(char arr[]);
int countlength(char arr[]);
void salting(char password[]);

int main() {
    char password[100];
    scanf("%s",password);
    salting(password);
    return 0;
}

void salting(char password[]) {
    char salt[] = "123";
    char newpass[200];

    strcpy(newpass, password); //newpass="test"
    strcat(newpass, salt);  //newpass="test"+ "123";
    puts(newpass);
}

int countlength(char arr[]) {
    int count = 0;
    for(int i=0; arr[i]!= '\0'; i++){
        count++;
    }
    return 0;
}

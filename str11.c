#include<stdio.h>
#include<string.h>


int countlength(char arr[]);

int main(){
    char str[100];
    char ch;
    int i = 0;
    while (ch != '\n'){
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);
    return 0;
}

int countlength(char arr[]){
    int count = 0;
    for(int i=0; arr[i]!='\0'; i++){
    count++;
}
return count;
}
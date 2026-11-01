#include<stdio.h>
#include<string.h>

int countvowels(char str[]);

    int main() {
        char str[] = "helloworld";
        int result = countvowels(str);
        printf("Number of vowels = %d\n", result);
    }

    int countvowels(char str[]){
        int count = 0;

        for(int i=0; str[i]!= '\0'; i++){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
                count++;
              }
        }
        return count ;
    }
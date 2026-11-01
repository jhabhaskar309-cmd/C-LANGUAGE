//strlen() - length
//strcpy() - copy
//strcat() - concatenate/join
//strcmp() - compare

#include <stdio.h>
#include<string.h>

void printstring(char arr[]);
void countlength(char arr[]);

int main (){
    char firststr[] = "Apple";
    char secstr[] = "Banana";
    printf("%d",strcmp(secstr,firststr));
    return 0;
}
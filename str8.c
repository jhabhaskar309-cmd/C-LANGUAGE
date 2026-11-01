//strlen() - length
//strcpy() - copy
//strcat() - concatenate/join
//strcmp() - compare


#include<stdio.h>
#include<string.h>

void printstring(char arr[]);
int countlength(char arr[]);

int main(){
    char oldstr[] = "oldstr";
    char newstr[] = "newstr";
    strcpy (newstr , oldstr);
    puts(newstr);
    return 0;
}
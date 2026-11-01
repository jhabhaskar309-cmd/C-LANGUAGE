<<<<<<< HEAD
//strlen() - length
//strcpy() - copy
//strcat() - concatenate/join
//strcmp() - compare

#include<stdio.h>
#include<string.h>
void printstring(char arr[]);
int countlength(char arr[]);

int main() {
    char firststr[100] = "hello";
    char secstring[] = "world";
    strcat(firststr,secstring);
    puts(firststr);
    return 0;
=======
//strlen() - length
//strcpy() - copy
//strcat() - concatenate/join
//strcmp() - compare

#include<stdio.h>
#include<string.h>
void printstring(char arr[]);
int countlength(char arr[]);

int main() {
    char firststr[100] = "hello";
    char secstring[] = "world";
    strcat(firststr,secstring);
    puts(firststr);
    return 0;
>>>>>>> 87e00ee52159498057f87b0ab6b0b4f4addda950
}
#include<stdio.h>
#include<string.h>
  
typedef struct bankaccount {
    int accountNo ;
        char name[100];
} acc ;

int main(){
    acc acc1 = {123,"bhaskar"};
    acc acc2 = {124,"suchi"};
    acc acc3 = {125,"juhi"};

    printf("acc no = %d\n", acc1.accountNo);
    printf("name = %s\n", acc1.name);
    return 0;
}
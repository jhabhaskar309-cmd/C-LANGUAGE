<<<<<<< HEAD
#include <stdio.h>
int main(){
    int aadhar[5];

    //input
    int *ptr = &aadhar[0];
    for(int i=0; i<5; i++){
        printf("%d",i);
    scanf("%d",(ptr+i));

}

//output
for(int i=0; i<5; i++){
printf("%d index = %d", i,*(ptr+i));
}
return 0;
=======
#include <stdio.h>
int main(){
    int aadhar[5];

    //input
    int *ptr = &aadhar[0];
    for(int i=0; i<5; i++){
        printf("%d",i);
    scanf("%d",(ptr+i));

}

//output
for(int i=0; i<5; i++){
printf("%d index = %d", i,*(ptr+i));
}
return 0;
>>>>>>> 87e00ee52159498057f87b0ab6b0b4f4addda950
}
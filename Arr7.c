//MULTIDIMENSIONAL ARRAY
// 2D arrys,3D arrys,...
//int arr[][]={{1,2},{3,4}};  ->DECLARE 

//Access
//arr[0][0] -> 1
//arr[0][1] -> 2
//arr[1][0] -> 3
//arr[1][1] -> 4

#include<stdio.h>
int main(){
    //2x3
    int marks[2][3]; //_ _ _ | _ _ _
    marks[0] [0] = 90;
    marks[0] [1] = 89;
    marks[0] [2] = 78;
    
    marks[1] [0] = 90;
    marks[1] [1] = 89;
    marks[1] [2] = 78;

    printf("%d",marks[0] [0]);

    return 0;
}
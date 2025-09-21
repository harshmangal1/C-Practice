// What will the following line produce in a C program.
//  printf("%d %d %d \n", a, ++a, a++);

#include<stdio.h>


int main(){
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);

    // 4 5 5 if the evaluation order is left to right 
    // 6 6 4 else right to left (most of the compiler assume this)
    return 0;
}
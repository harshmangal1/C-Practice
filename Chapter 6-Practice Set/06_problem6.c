// WAP to print the value of a variable i by using "pointer to pointer" type
// of variable.

#include<stdio.h>

int main(){
    int i =2;
    int* ptr1 = &i;
    int** ptr2 = &ptr1;
    printf("The address of i is %d\n",&i);
    printf("The address of i is %d\n",*ptr1);
    printf("The address of i is %d\n",**ptr2);
    printf("The address of ptr2 is %d\n",&ptr2);
    return 0;
}
// WAP to print the address of a variable. Use this address to get the
// value of the variable.

#include<stdio.h>

int main(){
    int i = 89;
    int* ptr = &i;
    printf("The value of i is %u\n",i);
    printf("The address of i is %u\n",&i);
    printf("The value of i is %u\n",*ptr);
    printf("The value of ptr is %u\n",ptr);
    return 0;
}
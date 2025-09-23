#include<stdio.h>

int main(){
    int i = 72;
    int* j = &i; // j is a pointer pointing to i(j is an integer pointer)
    int k = 99;
    printf("The address of i is %u\n", &i);
    printf("The address of j is %u\n", j);
    printf("The address of j is %u\n", &j);
    printf("The address of k is %u\n", &k);

    printf("The value of at address j is %d\n",*j);
    printf("The value of at address j is %d\n",*(&i));
    printf("The value of at address j is %d\n",*(&j));
    return 0;
}
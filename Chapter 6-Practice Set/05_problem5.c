// WAP using a function which calculates the sum and average of two
// numbers. Use pointers and print the values of sum and average in main().

#include<stdio.h>

int* sum (int a, int b);
float* average (int a, int b);

int* sum (int a, int b){
    int sum1 = a+b;
    int* ptr = &sum1;
    printf("The sum is %d\n",sum1);
    return ptr;
}

float* average (int a, int b){
    float avg = (a+b)/2.0;
    float* ptr = &avg;
    printf("The average is %f\n",avg);
    return ptr;
}
int main(){
    int x =23, y =46;
    int* ptr1;
    float* ptr2;
    printf("The value of x is %d, & and y is %d\n",x,y);
    ptr1 = sum(x,y);
    ptr2 = average(x,y);

    printf("The address of su is %u\n & of average is %u\n",ptr1,ptr2);

    return 0;
}
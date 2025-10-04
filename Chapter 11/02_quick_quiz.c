// WAP to create a dynamic array of 5 floats using malloc().

#include<stdio.h>
#include<stdlib.h>

int main(){
    float n = 5;
    float* ptr;
   
    ptr = (float*) malloc(n * sizeof(float));
    // int arr[n]; // Not allowed in c


    ptr[0]=5;
    ptr[1]=16;
    ptr[2]=25;
    ptr[3]=36;
    ptr[4]=46;

    printf("%f\n",ptr[0]);
    printf("%f\n",ptr[1]);
    printf("%f\n",ptr[2]);
    printf("%f\n",ptr[3]);
    printf("%f\n",ptr[4]);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    // int arr[n]; // Not allowed in c

    ptr = (int*) malloc(n* sizeof(int));

    ptr[0]=5;
    ptr[1]=6;
    printf("%d\n",ptr[0]);
    free(ptr);
    printf("%d\n",ptr[1]);

    return 0;
}
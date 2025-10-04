// WAP to create an array of size n using calloc where n is an
// integer entered by the user.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    // int arr[n]; // Not allowed in c

    ptr = (int*) calloc(n, sizeof(int));

    ptr[0]=5;
    ptr[1]=6;
    printf("%d\n",ptr[0]);
    printf("%d\n",ptr[1]);
    return 0;
}
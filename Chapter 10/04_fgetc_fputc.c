#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("harsh.txt","a");

    // char c = fgetc(fptr); //used to read a charcter from file
    // printf("%c",c);
    fputc('c',fptr);
    return 0;
}
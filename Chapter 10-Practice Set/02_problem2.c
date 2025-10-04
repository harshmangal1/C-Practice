// WAP to generate multiplication table of a given number in text format. 
// Make sure that the file is readable and well formatted.

#include<stdio.h>

int main(){
    FILE *ptr;
    int num = 19;
    ptr = fopen("file.txt","w");
    // fscanf(ptr,"%d",&num);
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr,"%d",num*(i+1));
        fprintf(ptr,"%c",'\n');
    }
    return 0;
}
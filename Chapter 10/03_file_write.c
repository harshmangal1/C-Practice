#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("harsh.txt","a");

    int num =784;
    // fscanf(ptr,"%d",&num);
    // printf("The value of num is %d  \n",num);
    fprintf(fptr,"%d",num);
    fclose(fptr);
    return 0;
}
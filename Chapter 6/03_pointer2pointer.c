#include<stdio.h>
#include<conio.h>

int main(){
    int i = 7;
    int* j = &i;
    int** k = &k;
    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);
    printf("The value of i is %d\n",*(&i));
    printf("The value of i is %d\n",**(&j));
    return 0;
}
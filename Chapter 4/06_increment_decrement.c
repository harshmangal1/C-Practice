#include<stdio.h>
#include<conio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n",i);

    i = i+5;
    printf("The value of i is %d\n",i);
    ++i;
    printf("The value of i is %d\n",i);

    printf("The vaue of i is %d\n",i++);  //post increment 
    i++ prints first and then increments (post increment oper)
    return 0;
}
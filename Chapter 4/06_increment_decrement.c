#include<stdio.h>
#include<conio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n",i);

    i = i+5;
    printf("The value of i is %d\n",i);

    printf("The value of i is %d\n",i++);

    printf("The vaue of i is %d\n",++i);  //post increment 
    
    // i++ prints i first and then increments i (post increment operator)
    // ++i increments i first and then prints i (post increment operator)
    return 0;
}
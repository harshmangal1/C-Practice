// Try problem 3 using call by value and verify that it does not change the value of
// the said variabe.

#include<stdio.h>

void change_to_thirty_times(int a);

void change_to_thirty_times(int a){
    a = a*30;
}
int main(){
    int x = 60;
    printf("The value of x is %d\n",x);
    change_to_thirty_times(x);
    printf("The value of x is %d\n",x);
    return 0;
}
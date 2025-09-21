// WAf to convert celsius temperature into fahrenheit.

#include<stdio.h>

float c2f(float c){
    return ((9*c)/5)+32;
}
int main(){
    float c = 45;
    printf("The temperature celsius into fahrenheit for %.2f is %.2f\n",c, c2f(c));
    return 0;
}
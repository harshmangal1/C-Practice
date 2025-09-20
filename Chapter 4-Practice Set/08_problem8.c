// WAP to calculate the factorial of a given number using a for loop.

#include<stdio.h>
#include<conio.h>

int main(){
    int product = 1,n=0;
    for (int i = 1; i <=n; i++)
    {
        product *= i;
    }
    printf("The factorial is %d",product);
    return 0;
}
#include <stdio.h>
#include <conio.h>

// Function prototype
int sum(int,int);

// Function definition
int sum(int x, int y){
    printf("The sum is %d\n",x+y);
    return x+y;
}

int main()
{
    int a = 1;
    int b = 2;

    // int c = a + b;
    // printf("The sum is %d\n", c);
    sum(a,b);

    int a1=23;
    int b1 =34;
    sum(a1,b1);
    return 0;
}
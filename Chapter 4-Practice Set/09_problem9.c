// 9. Repeat 8 using while loop.

#include<stdio.h>
#include<conio.h>

int main(){
    int product = 1, n =4,i=1;
    while (i<=n)
    {
        product *=i;
        i++;
    }
    printf("The factorial of %d is %d",n,product);
    
    return 0;
}
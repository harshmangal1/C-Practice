// 2. WAP to print multiplication table of 10 in reversed order.

#include<stdio.h>
#include<conio.h>

int main(){
    int n ;
    scanf("%d",&n);
    for (int i = 10; i; i--)
    {
        printf("%d X %d = %d\n",n,i,n*i);
    }
    
    return 0;
}
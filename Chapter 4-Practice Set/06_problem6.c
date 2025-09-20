// 6. WAP to implememt program 5 using 'for' and 'do-while' loop.

#include<stdio.h>
#include<conio.h>

int main(){

    // USING DO WHILE LOOP:
    // int i=1,sum=0;
    // do{
    //     sum+=i;
    //     i++;
    // }while(i<=10);

    // USING FOR LOOP:
    int sum =0;
    for (int i = 0; i <= 10; i++)
    {
        sum+=i;
    }
    
    printf("The sum of first 10 natural numbers is %d",sum);
    return 0;
}
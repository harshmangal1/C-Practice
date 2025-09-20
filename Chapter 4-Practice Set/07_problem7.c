// 7. WAP to calculate the sum of the numbers occuring in the 
//    multiplication table of 8. (consider 8*1 to 8*10).

#include<stdio.h>
#include<conio.h>

int main(){
    int sum=0;
    for (int i = 1; i <=10; i++)
    {       
        sum += (8*i);
    }
    printf("The sum of the table of 8 is %d",sum);
    
    return 0;
}
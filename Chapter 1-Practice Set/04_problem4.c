// 4. Write a program to calculate simple interest for a set of values representing
// principal, number of years and rate of interest.

#include<stdio.h>
#include<conio.h>

int main(){
    float p,r,t;
    printf("Enter the value of p is: ");
    scanf("%f",&p);
    printf("Enter the value of r is: ");
    scanf("%f",&r);
    printf("Enter the value of t is: ");
    scanf("%f",&t);

    printf("The Simple Interest is %f",(p*r*t)/100);
    return 0;
}
// WAP to find whether a year entered by the user is a leap year
// or not. take year as an input from the user.

#include<stdio.h>
#include<conio.h>

int main(){
    int year;
    printf("Enter year: \n");
    scanf("%d",&year);

    if((year %4 == 0 && year %100!=0) || year %400==0){
        printf("This is leap year");
    }else{
        printf("This is not a  leap year");
    }
    return 0;
}
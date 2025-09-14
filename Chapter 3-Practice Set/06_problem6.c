// WAP to find a greatest of four numbers entered by the user.
#include<stdio.h>
#include<conio.h>

int main(){
    int a=60,b=728,c=713,d=89;
    if(a>b && a>c && a>d){
        printf("The grestest of all is %d\n",a);
    }else if(b>a && b>c && b>d){
        printf("The grestest of all is %d\n",b);
    }else if(c>a && c>b && c>d){
        printf("The grestest of all is %d\n",c);
    }else{
        printf("The greatest of all is %d\n",d);
    }
    return 0;
}
// WAP to determine whether a character entered by the user is
// lowercase or not.
// https://www.ascii-code.com/


#include<stdio.h>
#include<conio.h>

int main(){
    char ch ='7 ';
    printf("The character is %c\n",ch);
    printf("The value of character is %d\n",ch);
    // a-z(97-122)
    if(ch>=97 && ch<=122){
        printf("This character is lowercase");
    }else{
        printf("The character is not lowercase");
    }
    return 0;
}


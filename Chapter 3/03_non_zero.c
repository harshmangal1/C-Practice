#include<stdio.h>
#include<conio.h>

int main(){
    if(1){
        printf("This if is executed!\n");
    }
    if(2345){
        printf("This if is also executed!\n");
    }
    if(2.45){
        printf("This if is also executed because it is flotaing value !\n");
    }
    if('c'){
        printf("This if is executed because character!\n");
    }
    if(0){
        printf("This if is not executed!\n");
    }
    return 0;
}
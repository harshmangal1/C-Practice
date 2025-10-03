#include<stdio.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

void show(struct employee e);

void show(struct employee e){
    printf("code is %d\nSalary is %f\n Name is %s\n", e.code,e.salary,e.name);
}

int main(){
    struct employee e1;
    e1.code = 45611;
    strcpy(e1.name,"Harsh");
    e1.salary = 45.44;
    show(e1);

    return 0;
}
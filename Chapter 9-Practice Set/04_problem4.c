// WAP to illustrate the use of arrow operator -> in C.

#include<stdio.h>

typedef struct emp{
    int salary;
    float score;
}Employee;

int main(){
    Employee e1;
    Employee* ptr = &e1;

    // Same as 
    ptr->salary =56; // (*ptr).salary = 56;
    ptr->score =45.55; //(*ptr).score = 45.55;
    printf("The value of salary is %d and the value of score is %f \n",ptr->salary,ptr->score);
    
    return 0;
}
// WAF 'sumVector' which returns the sum of two vectors passed to it.
// The vectors must be two-dimensional.

#include<stdio.h>

typedef struct vector{
    int i;
    int j;
}vect;

vect sumVector(vect v1, vect v2){
    vect v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}
int main(){
    vect v1 = {1,2}; 
    vect v2 = {5,6}; 
    vect v3 = sumVector(v1,v2); 

    printf("The vavect v3 is %di + %dj",v3.i,v3.j);
    return 0;
}
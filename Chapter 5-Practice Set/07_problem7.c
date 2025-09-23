// Write a program using function to print the following pattern (first n lines).
// *
// ***
// *****

#include<stdio.h>

int main(){
    int n = 3;
    for (int i =0;i<4;i++){
        // This loop runs 0 to 3;
        // if i = 0 --> print 1 star
        // if i = 1 --> print 3 stars
        // if i = 2 --> print 5 stars
        // if i = 3 --> print 7 stars
        // no_of_stars = (2*i+1)
        for (int j = 0; j<2*i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
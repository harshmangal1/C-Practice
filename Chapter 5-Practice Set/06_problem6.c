// Write a recursive function to calculate the sum of first 'n' natural numbers.

#include<stdio.h>

int sum_natural(int);
int sum_natural(int n){
    if (n==1){
        return 1;
    }
    // sum(n) = 1 + 2 + 3 + 4 + 5 + ... n-1 + n;
    // sum(n) = sum(n-1) + n;
    return sum_natural(n-1) + n;
}

int main(){
    int a = 1000;
    printf("The sum of the above %d numbers is %d\n",a,sum_natural(a));
    return 0;
}
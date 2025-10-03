// WAF slice() to slice a string. it should change the original string such that it is 
// now the sliced string. Take 'm' and 'n' as the start and ending position for slice.


#include<stdio.h>

char* slice(char str[],int m,int n){
    int i = 0, count;

    // start se lekar end tak copy karenge
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];

    str = ptr1;

    // string ko end karna zaroori hai
    str[n] = '\0';
    return str;  // sliced string return karo
}

int main(){
    char str[] = "Harsh Mangal";

    printf("%s", slice(str, 1, 7));
    return 0;
}
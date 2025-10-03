// WAP to count the occurance of a given character in a string.

#include <stdio.h>
#include <string.h>

int main(){
    char c = 'b';
    int count = 0;
    char str[] = "Ibsti!nfsb!obbn!ibj!ljtj!lp!nu!cbubob";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

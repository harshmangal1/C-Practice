// WAP to decrypt the string encrypted using encrypt function in problem 6.


#include<stdio.h>
#include<string.h>

int main(){


    // decryption
    char str[] = "Ibsti!nfsb!obbn!ibj!ljtj!lp!nu!cbubob";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }

    printf("%s",str);
    return 0;

    
    
}
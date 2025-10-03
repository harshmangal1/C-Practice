#include<stdio.h>
#include<string.h>

int main(){
    char st[] = "Harsh";
    char st1[] = "Mangal";
    char st2[] = "from Mca";
    // printf("%d\n", strlen(st));

    char target[30];
    strcpy(target,st); // target now contains "Harsh"
    // printf("%s %s", st, target);
    
    // strcat(st1,st2);
    // printf("%s",st1);

    int a = strcmp("deep","joke");
    printf("%d",a);
    return 0;
}
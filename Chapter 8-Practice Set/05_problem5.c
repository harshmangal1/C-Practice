// Write your own version of strcpy function from <string.h>

#include <stdio.h>

int mystrlen(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

void mystrcpy(char target[], char source[])
{
    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0';
}

int main()
{
    char source[] = "harsh";
    char target[30];
    mystrcpy(target, source); // target now contains "harsh"
    printf("%s %s", source, target);
    return 0;
}
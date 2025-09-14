#include <stdio.h>
#include <conio.h>

int main()
{
    int age = 15;

    if (age > 60)
    {
        printf("You can drive and you are a senior citizen");
    }
    else if (age > 18)
    {
        printf("you can drive");
    }
    else
    {
        printf("you cannot drive");
    }
    return 0;
}
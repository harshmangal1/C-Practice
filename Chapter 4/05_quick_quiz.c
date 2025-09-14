// WAP to print natural numbers from 10 to 20 when initial loop
// counter is initialized to 0.

#include <stdio.h>
#include <conio.h>

int main()
{
    float i = 0;
    while (i <= 20)
    {
        if (i >= 10)
        {
            printf("The vaue of i is %f\n", i);
        }
        i++;
    }
    return 0;
}
// 10. WAP to check whether a given number is not_prime or not using loops.

#include <stdio.h>
#include <conio.h>

int main()
{
    int n, not_prime = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        not_prime = 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
        }
    }
    if (not_prime)
    {
        printf("%d is not a prime\n", n);
    }
    else
    {
        printf("%d is prime\n", n);
    }

    return 0;
}
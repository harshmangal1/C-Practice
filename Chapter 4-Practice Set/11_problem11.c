// 11. Implement 10 using other types of loops.

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
        int i = 2;
        // while (i < n)
        // {
        //     if (n % i == 0 && n != 2)
        //     {
        //         not_prime = 1;
        //         break;
        //     }
        //     i++;
        // }

        // do-while loop
        do
        {
            if (n % i == 0 && n != 2)
            {
                not_prime = 1;
                break;
            }
            i++;
        }while (i < n);
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
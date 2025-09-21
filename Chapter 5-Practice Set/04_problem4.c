// WAP using recursion to calculate nth element of Fibonacci series.

#include <stdio.h>

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// fibonacci (n) = fibonacci(n-1) + fibonacci(n-2);

int fibonacci(int);
int fibonacci(int n)
{

    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main()
{
    int a =6;
    printf("The value of fibonacci series at %d is %d",a,fibonacci(a));
    return 0;
}
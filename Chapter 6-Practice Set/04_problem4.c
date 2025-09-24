// WAf and pass the value by reference.

#include <stdio.h>

// Function to swap two numbers (pass by reference)
void swap(int *a, int *b) {
    int temp;
    temp = *a;   // store value at address a
    *a = *b;     // put value of b into a
    *b = temp;   // put temp into b
}

int main() {
    int x = 10, y = 20;

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Pass addresses of x and y
    swap(&x, &y);

    printf("After swapping:  x = %d, y = %d\n", x, y);

    return 0;
}

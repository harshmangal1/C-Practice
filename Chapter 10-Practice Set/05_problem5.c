// WAP to modify a file containing an integer to double its value.

#include <stdio.h>

int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("harsh5.txt", "r");
    fscanf(ptr, "%d", &num);

    fclose(ptr);

    ptr = fopen("harsh5.txt", "w");
    fprintf(ptr, "%d", 2*num);

    fclose(ptr);
    return 0;
}
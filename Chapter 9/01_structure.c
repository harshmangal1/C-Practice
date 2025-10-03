#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

int main()
{
    struct employee e1, e2;
    strcpy(e1.name, "Harsh");
    e1.salary = 5690.98;
    e1.code = 92822;

    printf("%d %s %f", e1.code, e1.name, e1.salary);
    return 0;
}
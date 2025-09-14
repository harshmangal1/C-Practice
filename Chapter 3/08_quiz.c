// Write a program to find grade of a student
// given his marks based on below:

#include <stdio.h>
#include <conio.h>

int main()
{
    char grade;
    int marks ;
    printf("Enter the stduent marks: ", marks);
    scanf("%d", &marks);
    if (marks <= 100 && marks >= 90)
    {
        grade = 'A';
    }
    else if (marks <= 90 && marks >= 80)
    {
        grade = 'B';
    }
    else if (marks <= 80 && marks >= 70)
    {
        grade = 'C';
    }
    else if (marks <= 70 && marks >= 60)
    {
        grade = 'D';
    }
    else if (marks <= 60 && marks >= 50)
    {
        grade = 'E';
    }
    else{
        grade ='F';
    }
    printf("grades: %c\n", grade);
    return 0;
}
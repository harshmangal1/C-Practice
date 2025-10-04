// Write a structure capable of storing date. Write a function to compare those dates.

#include <stdio.h>
struct Date
{
    int mm;
    int dd;
    int yyyy;
};

int compare(struct Date d1, struct Date d2)
{
    // If dates are equal
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }
    // if d1 is inthe future, return 1
    // Compare year
    if (d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return -1;
    }

    // Compare month
    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return -1;
    }

    // Compare day
    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return -1;
    }
    return 0; // fallback (should not reach here)

}

int main()
{
    struct Date d1 = {12, 4, 2054};
    struct Date d2 = {13, 4, 2004};
    printf("%d", compare(d1, d2));

    return 0;
}